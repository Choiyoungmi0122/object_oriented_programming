//
//  실습3.cpp
//  object_oriented_programming
//
//  Created by 최영미 on 3/27/23.
//

#include <iostream>
#include "CoffeeMachine.h"

using namespace std;


CoffeeMachine::CoffeeMachine(int c, int w){
    coffee = c;
    water = w;
}

void CoffeeMachine::drinkEspresso(){
    coffee--;
    water--;
    cout << "에스프레소 1잔" << endl;
}

void CoffeeMachine::drinkAmericano(){
    coffee--;
    water-=2;
    cout << "아메리카노 1잔" << endl;
}

void CoffeeMachine::fill(){
    coffee=10;
    water=10;
    cout << "<커피 머신 채움>" << endl;
}

void CoffeeMachine::show(){
    cout << "커피 머신 상태, 커피:" << coffee << " 물:" << water << endl << endl;
}



int main(){
    CoffeeMachine java(5,10);       //커피량 : 5 물량 : 10 으로 초기화
    cout << "커피머신 상태\n";
    cout << "커피량:5 물량 : 10으로 초기화\n\n";
    java.drinkEspresso();       //커피1, 물1 소비
    java.show();            //현재 커피 머신의 상태 출력
    java.drinkAmericano();  //커피1 물2 소비
    java.show();       //현재 커피 머신의 상태 출력
    java.fill();     //커피10, 물10 으로 채우기
    java.show();    //현재 커피 머신의 상태 출력
}
