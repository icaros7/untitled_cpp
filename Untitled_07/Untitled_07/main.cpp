/*
 * Untitled_06
 * iCAROS7, hominlab@gmail.com
 * main.cpp
 * 20211209 1008
 */

#include <iostream>

int main() {
    int count = 0; // 사용자로부터 입력 받을 정수 개수 저장 변수
    int *p; // int 형 포인터 생성

    try { // 사용자로부터 정수 개수 입력 받기
        std::cout << "몇 개의 정수를 입력합니까?";
        std::cin >> count;
        if (count <= 0) { throw count; }
    }
    catch (int e) {
        exit(1);
    }

    p = new int[count]; // int 형 동적 배열 생성

    for (int i = 0; i < count; i++) { // 사용자로부터 정수 입력 받기
        std::cout << "정수를 입력하시오:";
        std::cin >> p[i];
    }

    int max = p[0];
    int min = p[0];
    for (int i = 0; i < count; i++) {
        if (max > p[i]) { max = p[i]; }
        if (min < p[i]) { min = p[i]; }
    }

    std::cout << "M: " << max << "\nm: " << min << std::endl;
    
    delete[] p; // 동적 배열 메모리 반환

    return 0;
}
