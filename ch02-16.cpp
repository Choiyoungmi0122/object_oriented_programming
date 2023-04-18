//
//  ch02-16.cpp
//  object_oriented_programming
//
//  Created by 최영미 on 4/18/23.
//

#include <iostream>
#include <cstring>
using namespace std;

int main() {

    int countStack = 0, numCount = 0;
    char buf[10000];

    cout << "영문 텍스트를 입력하세요. 히스토그램을 그립니다." << endl;
    cout << "텍스트의 끝은 ; 입니다. 10000개까지 가능합니다." << endl;

    cin.getline(buf, 10000, ';');

    for (int i = 0; i <= strlen(buf); i++)
    {
        if (isalpha(buf[i]) != 0)
        {
            buf[i] = tolower(buf[i]);
            numCount++;
        }
    }

    cout << "총 알파벳 수 " << numCount << endl;

    for (char i = 'a'; i <= 'z'; i++)
    {
        for (int j = 0; j <= strlen(buf); j++)
            if (buf[j] == i)
                countStack++;
        cout << i << "(" << countStack << ")" << " : ";
        for (int k = 0; k < countStack; k++)
            cout << "*";
        cout << endl;
        countStack = 0;
    }
}
