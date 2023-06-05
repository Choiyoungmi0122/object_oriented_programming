//
//  ch10실습4.cpp
//  object_oriented_programming
//
//  Created by 최영미 on 2023/06/05.
//

#include <iostream>
using namespace std;

template<typename T>

double getAverage(const T* array, int size) {
    double sum = 0;
    for (int i = 0; i < size; i++) {
        sum += static_cast<double>(array[i]);
    }
    return sum / size;
}

int main() {
    double list[] = {1.2, 3.3, 9.0, 1.5, 8.7};
    int arraySize = sizeof(list) / sizeof(list[0]);

    double average = getAverage(list, arraySize);
    std::cout << "평균 값: " << average << std::endl;

    return 0;
}
