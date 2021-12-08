/*
 * Untitled_05
 * iCAROS7, hominlab@gmail.com
 * main.cpp
 * 20211208 2330
 */

#include "Box.hpp"

void printBox(Box &box, int boxNum) {
    std::cout << "상자 #" << boxNum << std::endl;
    std::cout << "상자의 길이: " << box.length << std::endl;
    std::cout << "상자의 너비: " << box.width << std::endl;
    std::cout << "상자의 높이: " << box.height << std::endl;
}

int main(int argc, const char * argv[]) {
    Box a(20,20,20);
    Box b(10,10,10);
    Box c;
    Box d;
    c = a + b;
    d = a - b;
    
    printBox(c, 3);
    printBox(d, 4);
    
    std::cout << std::boolalpha << (a == b) << std::endl;
    std::cout << std::boolalpha << (a > b) << std::endl;
    return 0;
}
