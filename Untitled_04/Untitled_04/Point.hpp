/*
 * Untitled_04
 * iCAROS7, hominlab@gmail.com
 * Point.hpp
 * 20211208 1945
 */

#ifndef Point_hpp
#define Point_hpp

#include <iostream>

class Point {
    int x, y;
    
public:
    /// 생성자
    /// @param x 2차원 x좌표
    /// @param y 2차원 y좌표
    Point(int x = 0, int y = 0) : x(x), y(y) {}
    
    /// 객체 정보 출력
    /// @param fromChild 자식으로부터 호출 유무
    void print(bool fromChild);
    
    // getter
    int getX() const { return x; }
    int getY() const { return y; }
};

#endif /* Point_hpp */
