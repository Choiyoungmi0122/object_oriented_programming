//
//  6-5.cpp
//  object_oriented_programming
//
//  Created by 최영미 on 2023/06/13.
//

#include <iostream>
using namespace std;

void fllLine(int n=25, char c='*');

void fllLine(int n, char c){
    for(int i=0;i<n;i++)
        cout << c;
    cout << endl;
}

int main(){
    fllLine();
    fllLine(10, '%');
}
