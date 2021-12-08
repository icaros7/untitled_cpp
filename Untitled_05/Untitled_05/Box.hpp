/*
 * Untitled_05
 * iCAROS7, hominlab@gmail.com
 * Box.hpp
 * 20211208 2330
 */

#ifndef Box_hpp
#define Box_hpp

#include <iostream>

class Box {
private:
    double length;
    double width;
    double height;
    
public:
    /// 생성자
    Box(double len = 0, double wid = 0, double hei = 0) : length(len), width(wid), height(hei) {}
    
    /// 매개변수가 없는 부피 반호나 메서드
    double getVolume(void) const;
    
    /// 박스 객체 정보 출력 메서드
    /// @param box 피 출력자
    /// @param boxNum 박스의 번호
    friend void printBox(Box &box, int boxNum);
    
    // 연산자 오버로드
    Box operator+ (const Box &slave);
    Box operator- (const Box &slave);
    bool operator== (const Box &slave);
    bool operator!= (const Box &slave);
    bool operator< (const Box &slave);
    bool operator> (const Box &slave);
    
};

#endif /* Box_hpp */
