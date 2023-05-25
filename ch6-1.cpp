//
//  ch6-1.cpp
//  object_oriented_programming
//
//  Created by 최영미 on 2023/05/25.
//

#include <iostream>
using namespace std;

int big(int a, int b){ // a와 b중 큰수 리턴
    if(a>b) return a;
    else    return b;
}

int big(int a[], int size){
    int res =a[0];
    for(int i=1;i<size;i++)
        if(res<a[i])    res=a[i];
    return res;
}

int main(){
    int array[5] = {1,9,4,2,5};
    cout << big(3,1) << endl;
    cout << big(array, 5) << endl;
}
