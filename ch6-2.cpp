//
//  ch6-2.cpp
//  object_oriented_programming
//
//  Created by 최영미 on 2023/05/25.
//

#include <iostream>
using namespace std;

int sum(int a, int b){
    int s=0;
    for(int i=a;i<=b;i++)
        s=s+i;
    return s;
}

int sum(int a){
    int s=0;
    for(int i=1;i<=a;i++)
        s=s+i;
    return s;
}

int main(){
    cout << sum(3,5) << endl;
    cout << sum(3) << endl;
    cout << sum(100) << endl;
}
