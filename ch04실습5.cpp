//
//  ch04실습5.cpp
//  object_oriented_programming
//
//  Created by 최영미 on 4/10/23.
//

#include <iostream>
#include <string>
using namespace std;

class Circle{
    int radius;
public:
    void setRadius(int radius){this->radius = radius;}
    double getArea(){ return radius*radius*3.14;}
};

int main(){
    int radius;
    int n,count=0;
    
    cout << "원의 개수 >> ";
    cin >> n;
    
    Circle *Array = new Circle[n];
    
    for(int i=0;i<n;i++){
        cout << "원 " << i+1 << "의 반지름 >> ";
        cin >> radius;
        Array[i].setRadius(radius);
        
        if(Array[i].getArea()>100)
            count++;
            
    }
    cout << "면적이 100보다 큰 원은 " << count << "개 입니다." <<endl;
    delete [] Array;
    
}

