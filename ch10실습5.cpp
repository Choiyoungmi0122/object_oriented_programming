//
//  ch10실습5.cpp
//  object_oriented_programming
//
//  Created by 최영미 on 2023/06/05.
//

#include <iostream>
#include <map>
#include <string>

using namespace std;

void addWord(std::map<std::string, std::string>& dictionary) {
    string word, meaning;
    cout << "추가할 영어 단어: ";
    cin >> word;
    cout << "추가할 의미 : ";
    cin.ignore();
    getline(std::cin, meaning);

    dictionary[word] = meaning;
    std::cout << "단어가 추가되었습니다." << std::endl;
}

void searchWord(const std::map<std::string, std::string>& dictionary) {
    string word;
    cout << "검색할 영어 단어: ";
    cin >> word;

    auto iter = dictionary.find(word);
    if (iter != dictionary.end()) {
        std::cout << "의미: " << iter->second << std::endl;
    } else {
        cout << "단어를 찾을 수 없습니다." << std::endl;
    }
}

int main() {
    map<std::string, std::string> dictionary;

    while (true) {
        int choice;
        cout << "======================================================" << endl;
        cout << "단어 추가 : 1. 단어 테스트 :  2. 영어 단어, 검색 종료 : 3" << endl;
        cout << "======================================================" << endl;
        cout << "하나를 선택하세요 : ";
        cin >> choice;

        switch (choice) {
            case 1:
                addWord(dictionary);
                break;
            case 2:
                searchWord(dictionary);
                break;
            case 3:
                cout << "프로그램을 종료합니다." << std::endl;
                return 0;
            default:
                cout << "잘못된 선택입니다. 다시 선택해주세요." << std::endl;
        }
    }
}
