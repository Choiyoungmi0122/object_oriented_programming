//
//  ch04실습2.cpp
//  object_oriented_programming
//
//  Created by 최영미 on 4/10/23.
//

#include <iostream>
#include <string>
using namespace std;

int main(){
    string s;
    
    cout << "문자열 입력>>";
    getline(cin, s, '\n');
    
    int len = s.length();
    int count = 0;
    
    for(int i=0;i<len;i++){
        if(s[i] == 'a')
            count++;
    }
    
    cout<< "문자 a는 " << count << "개 있습니다." << endl;
    
}
