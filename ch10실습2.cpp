//
//  ch10실습2.cpp
//  object_oriented_programming
//
//  Created by 최영미 on 2023/06/05.
//

#include <iostream>
using namespace std;

template<typename T>
bool search(const T& value, const T* array, int size) {
    for (int i = 0; i < size; i++) {
        if (array[i] == value) {
            return true;
        }
    }
    return false;
}


int main(){
char c[] = {'h','e','l','l','o'};
if(search('e',c,5))
     cout << "e가 배열 c에 포함되어 있다";
else
   cout << "e가 배열 c에 포함되어 있지 않다";
cout << endl;
}
