/*
 * Untitled_04
 * iCAROS7, hominlab@gmail.com
 * main.cpp
 * 20211208 1945
 */

#include "ThreeDPoint.hpp"

int main(int argc, const char * argv[]) {
    ThreeDPoint p1(10, 10, 10);
    ThreeDPoint p2(20, 20, 20);
    ThreeDPoint p3;
    
    p3 = p1 + p2;
    p1.print();
    p2.print();
    p3.print();
    
    return 0;
}
