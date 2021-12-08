 /*
 * Untitled_04
 * iCAROS7, hominlab@gmail.com
 * Point.cpp
 * 20211208 1953
 */

#include "Point.hpp"

void Point::print(bool fromChild = false) {
    std::cout << "(" << getX() << ", " << getY();
    
    if (!fromChild) { std::cout << ")" << std::endl; }
}
