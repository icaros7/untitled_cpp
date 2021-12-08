/*
 * Untitled_04
 * iCAROS7, hominlab@gmail.com
 * ThreeDPoint.hpp
 * 20211208 2000
 */

#ifndef ThreeDPoint_hpp
#define ThreeDPoint_hpp

#include "Point.hpp"

class ThreeDPoint : protected Point{
    int z;
    
public:
    /// 생성자
    ThreeDPoint(int x = 0, int y = 0, int z = 0) : Point(x, y) { this->z = z; }
    
    /// + 연산자 오버로딩
    /// @param slave 피연산자
    ThreeDPoint operator+(const ThreeDPoint &slave);
    
    /// 객체 정보 출력 메서드 오버로딩
    void print();
    
    /// getter
    int getZ() const { return z; }
};

#endif /* ThreeDPoint_hpp */
