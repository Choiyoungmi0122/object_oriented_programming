//
//  7-3.cpp
//  object_oriented_programming
//
//  Created by 최영미 on 2023/06/18.
//

#include <iostream>
using namespace std;

class Rect;

class RectManger{
public:
    bool equals(Rect r, Rect s);
    void copy(Rect &dest, Rect& src);
};

class Rect{
    int width, height;
public:
    Rect(int width, int height){this->width = width; this->height=height;}
    friend RectManger;
};

bool RectManger::equals(Rect r, Rect s){
    if(r.width == s.width && r.height == s.height)  return true;
    else return false;
}

void RectManger::copy(Rect &dest, Rect &src){
    dest.width = src.width; dest.height = src.height;
}

int main(){
    Rect a(3,4), b(3,4);
    RectManger man;
    
    man.copy(b,a);
    if(man.equals(a, b))    cout << "equals" << endl;
    else    cout << "not equals" << endl;
}
