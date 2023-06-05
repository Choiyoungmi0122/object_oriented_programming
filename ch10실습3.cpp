//
//  ch10실습3.cpp
//  object_oriented_programming
//
//  Created by 최영미 on 2023/06/05.
//

#include <iostream>
using namespace std;

template<typename T>
T getSmallest(const T* array, int size) {
    T smallest = array[0];
    for (int i = 1; i < size; i++) {
        if (array[i] < smallest) {
            smallest = array[i];
        }
    }
    return smallest;
}

int main() {
    double list[] = {1.2, 3.3, 9.0, 1.5, 8.7};
    int arraySize = sizeof(list) / sizeof(list[0]);

    double smallestValue = getSmallest(list, arraySize);
    std::cout << "최소값: " << smallestValue << std::endl;

    return 0;
}
