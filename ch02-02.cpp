//
//  ch02-02.cpp
//  object_oriented_programming
//
//  Created by 최영미 on 4/18/23.
//

#include <iostream>
using namespace std;
int main(){
    for(int i=1;i<10;i++){
        for(int j=1;j<10;j++)
            cout << j << "X" << i << "=" << i*j << "\t";
        cout << endl;
    }
}
