//
//  4-2.cpp
//  object_oriented_programming
//
//  Created by 최영미 on 4/3/23.
//

#include <iostream>
using namespace std;

class Circle {
    int radius;
public:
 
    void setRadius(int r){radius = r;}
    double getArea();
};

double Circle::getArea() {
    return 3.14 * radius * radius;
}
int main() {
    Circle circleArray[3];

    circleArray[0].setRadius(10);
    circleArray[1].setRadius(20);
    circleArray[2].setRadius(30);

    for (int i = 0; i < 3; i++)
        cout << "Circle" << i << "¿« ∏È¿˚¿∫ " << circleArray[i].getArea() << endl;

    Circle* p = circleArray;

    for (int i = 0; i < 3; i++) {
        cout << "Circle" << i << "¿« ∏È¿˚¿∫ " << p++->getArea() << endl;
    }
}
