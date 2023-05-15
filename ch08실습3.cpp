//
//  ch08실습3.cpp
//  object_oriented_programming
//
//  Created by 최영미 on 2023/05/15.
//

#include <iostream>
using namespace std;

class Person
{
     public:
        string job;
        int age;

        void BasicPrint()
        {
             cout << "나의 직업 : " << job << endl;
             cout << "나의 나이 : " << age << endl;
             walk();
             talk();
        }
        void walk() { cout << "걸을 수 있음." << endl; }
        void talk() { cout << "말할 수 있음." << endl; }
};

class Professor : public Person
{
    public:
       void teach() { cout << "가르칠 수 있음." << endl; }
};

class TennisPlayer : public Person
{
    public:
       void playTennis() { cout << "테니스 경기를 할 수 있음" << endl; }
};

int main()
{
    Professor teacher;
    teacher.job = "교수";
    teacher.age = 39;
    teacher.BasicPrint();
    teacher.teach();

    TennisPlayer player;
    player.job = "테니스 선수";
    player.age = 23;
    player.BasicPrint();
    player.playTennis();

     return 0;
}
