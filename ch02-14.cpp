//
//  ch02-14.cpp
//  object_oriented_programming
//
//  Created by 최영미 on 4/18/23.
//

#include <iostream>
#include <string>
using namespace std;

int main() {

    int num=0,sum=0,total=0;
    char coffee[100];
    
    cout << "에스프레소 2000원, 아메리카노 2300원, 카푸치노 2500원 입니다." << endl;
    while (total <=20000)
    {
        cout << "주문>> ";
        cin >> coffee >> num;

        if (strcmp(coffee, "에스프레소") == 0)
        {
            sum =2000 * num;
            total += sum;
            cout << sum << "원입니다. 맛있게 드세요" << endl;
        }
        else if (strcmp(coffee, "아메리카노") == 0)
        {
            sum = 2300 * num;
            total += sum;
            cout << sum << "원입니다. 맛있게 드세요" << endl;
        }
        else if (strcmp(coffee, "카푸치노") == 0)
        {
            sum = 2500 * num;
            total += sum;
            cout << sum << "원입니다. 맛있게 드세요" << endl;
        }
        else {
            cout << "잘 못 입력하셨어요" << endl;
        }
    }
    cout << "오늘 " << total << "원을 판매하여 카페를 닫습니다. 내일 봐요~~~"<<endl;
}
