//
//  ch05실습4.cpp
//  object_oriented_programming
//
//  Created by 최영미 on 4/17/23.
//
#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <string>

using namespace std;

class Buffer{
    string text;
public:
    Buffer(string text){this->text = text;}
    void add(string next){text += next;}
    void print(){cout<<text<<endl;}
};

Buffer& append(Buffer& s, string g){
    s.add(g);
    return s;
}
 

int main(){
    Buffer buf("Hello");
    Buffer& temp = append(buf, "Guys");
    temp.print();
    buf.print();
}
