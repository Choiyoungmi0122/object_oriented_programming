//
//  6-3.cpp
//  object_oriented_programming
//
//  Created by 최영미 on 2023/06/13.
//

#include <iostream>
#include <string>
using namespace std;

//원형선언
void star(int a=5);
void msg(int id, string text="");

void star(int a){
    for(int i=0;i<a;i++)    cout << "*";
    cout << endl;
}

void msg(int id, string text){
    cout << id << " " << text << endl;
}
int main(){
    star();
    star(10);
    
    msg(10);
    msg(10, "Hello");
}
