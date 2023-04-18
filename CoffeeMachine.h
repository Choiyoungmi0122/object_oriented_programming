//
//  CoffeeMachine.h
//  object_oriented_programming
//
//  Created by 최영미 on 3/27/23.
//

#ifndef CoffeeMachine_h
#define CoffeeMachine_h

class CoffeeMachine{
public :
    int coffee, water;
    CoffeeMachine(int c, int w);
    void drinkEspresso();
    void show();
    void drinkAmericano();
    void fill();
};


#endif /* CoffeeMachine_h */
