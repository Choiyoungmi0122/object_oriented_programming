//
//  ch05실습2.cpp
//  object_oriented_programming
//
//  Created by 최영미 on 4/17/23.
//

#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <cstring>
using namespace std;

void combine(string &text1, string &text2, string &text3){
    text3 = text1 + " " + text2;
}

int main() {
    string text1("I love you"), text2("very much");
    string text3;
    combine(text1, text2, text3);
    cout << text3 << endl;
}
