/*
 * Untitled_01
 * iCAROS7, hominlab@gmail.com
 * main.cpp
 * 20211208 1130
 */

#include <iostream>

/**
 3개의 정수 중 가장 큰 값을 반환 메서드
 */
int getMax(int num1, int num2, int num3) {
    if (num1 >= num2 && num1 >= num3) { return num1; }
    else if (num2 >= num1 && num2 >= num3) { return num2; }
    else return num3;
}

/**
 Hello 메시지 출력 메서드
 */
void sayHello(int num) {
    std::cout << num << ", Hello!" << std::endl;
}

int main(int argc, const char * argv[]) {
    sayHello(getMax(10, 20, 3));
    return 0;
}
