//
//  ch02-05.cpp
//  object_oriented_programming
//
//  Created by 최영미 on 4/18/23.
//

#include <iostream>
using namespace std;
int main(){
    char a[100];
    int cnt=0;
    cout << "문자들을 입력하라(100개미만)." << endl;
    cin.getline(a, 100);
    
    for(int i=0;a[i]!='\0';i++){
        if (a[i] == 'x')
            cnt++;
    }
    
    cout << "x의 개수는 " << cnt << endl;
}
