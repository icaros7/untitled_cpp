/*
 * Untitled_04
 * iCAROS7, hominlab@gmail.com
 * ThreeDPoint.cpp
 * 20211208 2000
 */

#include "ThreeDPoint.hpp"

ThreeDPoint ThreeDPoint::operator+(const ThreeDPoint &slave) {
    ThreeDPoint result(getX() + slave.getX(), getY() + slave.getY(), getZ() + slave.getZ());
    return result;
}

void ThreeDPoint::print() {
    Point::print(true);
    std::cout << ", " << getZ() << ")" << std::endl;
}
