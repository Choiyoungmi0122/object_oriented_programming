//
//  ch02-08.cpp
//  object_oriented_programming
//
//  Created by 최영미 on 4/18/23.
//

#include <iostream>
#include <cstring>
using namespace std;
int main(){
    char name[100]={};
    string people;
    int max=0;
    cout << "5명의 이름은 ';'으로 구분하여 입력하세요 " << endl << ">>";
    
    for (int i=0;i<5;i++){
        
        cin.getline(name, 100, ';');
        
        cout << (i+1) << ":" << name <<endl;
        
        if(max < strlen(name)){
            max = strlen(name);
            people = name;
        }
    }
    
    cout << "가장 긴 이름은 " << people << endl;
}
