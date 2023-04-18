//
//  객체배열.cpp
//  object_oriented_programming
//
//  Created by 최영미 on 4/3/23.
//

#include <iostream>
using namespace std;

class Circle{
    int radius;
public:
    Circle() {}
    Circle(int r) {radius=r;}
    double get(){return 3.14*radius*radius;}
};

int main(){
    Circle waffle(15);
}
