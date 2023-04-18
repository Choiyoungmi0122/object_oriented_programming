//
//  ch05실습3.cpp
//  object_oriented_programming
//
//  Created by 최영미 on 4/17/23.
//

#include <iostream>
using namespace std;

class Accumulator{
    int value;
public:
    Accumulator(int value);
    Accumulator& add(int n);
    int get(){return value;}
};

Accumulator::Accumulator(int value){
    this->value=value;
}
Accumulator& Accumulator::add(int n){
    value = value + n;
    return *this;
}

int main(){
    Accumulator acc(10);
    acc.add(5).add(6).add(7);
    cout << acc.get() << endl;
}
