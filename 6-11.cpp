//
//  6-11.cpp
//  object_oriented_programming
//
//  Created by 최영미 on 2023/06/13.
//

#include <iostream>
using namespace std;

class Circle{
private:
    static int numOfCircles;
    int radius;
public:
    Circle(int r=1);
    ~Circle(){numOfCircles--;}
    double getArea(){return 3.14*radius*radius;}
    static int getNumOfCircles(){return numOfCircles;}
};

Circle::Circle(int r){
    radius = r;
    numOfCircles++;
}

int Circle::numOfCircles = 0;

int main(){
    Circle *p = new Circle[10];
    cout << "생존하고 있는 원의 개수 =  " << Circle::getNumOfCircles() << endl;
    
    delete [] p;
    cout << "생존하고 있는 원의 개수 =  " << Circle::getNumOfCircles() << endl;
    
    Circle a;
    cout << "생존하고 있는 원의 개수 =  " << Circle::getNumOfCircles() << endl;
    
    Circle b;
    cout << "생존하고 있는 원의 개수 =  " << Circle::getNumOfCircles() << endl;
}
