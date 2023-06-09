//
//  ch08실습1.cpp
//  object_oriented_programming
//
//  Created by 최영미 on 2023/05/15.
//

#include <iostream>
#include <string>
using namespace std;

class Circle{
    int radius;
public:
    Circle(int radius = 0) {this -> radius = radius;}
    int getRadius(){return radius;}
    void setRadius(int radius) {this -> radius=radius;}
    double getArea(){return 3.14*radius*radius;}
};

class NamedCircle : public Circle {
    string name;
public:
    NamedCircle(int radius = 0, string name = "") : Circle(radius) {
        this->name = name;
    }
    void show() {
        cout << "반지름이 " << getRadius() << "인 " << name << endl;
    }

    void setName(string name) { this->name = name; }
    string getName() { return name; }
};

int main() {
    NamedCircle pizza[5];
    cout << "5 개의 정수 반지름과 원의 이름을 입력하세요." << endl;
    for (int i = 0; i < 5; i++) {
        int tempNum;
        string tempStr;
        cout << i + 1 << ">> ";
        cin >> tempNum >> tempStr;
        pizza[i].setRadius(tempNum);
        pizza[i].setName(tempStr);
    }

    int maxRadius = -1, maxIdx;
    for (int i = 0; i < 5; i++) {
        if (maxRadius < pizza[i].getRadius()) {
            maxRadius = pizza[i].getRadius();
            maxIdx = i;
        }
    }
    cout << "가장 면적이 큰 피자는 " << pizza[maxIdx].getName();
}
