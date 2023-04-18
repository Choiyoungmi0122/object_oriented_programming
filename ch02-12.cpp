//
//  ch02-12.cpp
//  object_oriented_programming
//
//  Created by 최영미 on 4/18/23.
//

#include <iostream>
using namespace std;

int sum(int n){
    int result =0;
    for (int i=1;i<=n;i++)
        result += i;
    
    return result;
}

int main(){
    int n=0;
    cout << "끝 수를 입력하세요 >> ";
    cin >> n;
    cout << "1에서 "<< n << "까지의 합은 " << sum(n) << "입니다."<< endl;
}

