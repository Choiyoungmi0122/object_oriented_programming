//
//  ch04실습3.cpp
//  object_oriented_programming
//
//  Created by 최영미 on 4/10/23.
//

#include <iostream>
#include <string>
using namespace std;

int main(){
    string s;
    int count = 0, index=0;
    cout << "문자열 입력>>";
    getline(cin, s, '\n');

    while (true) {
        index = s.find('a', index+1);
        if (index == -1)
            break;
        else
            count++;
    }
    cout << "문자 a는 " << count << "개 있습니다." << endl;
    
    return 0;
}
