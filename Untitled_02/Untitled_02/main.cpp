/*
 * Untitled_02
 * iCAROS7, hominlab@gmail.com
 * main.cpp
 * 20211208 1555
 */

#include <iostream>

class Pc {
    std::string name_; // 컴퓨터 이름
    int ram_; // 램 용량
    double speed_; // CPU 클럭 속도
    
public:
    // 생성자
    Pc () {}
    Pc (std::string name, int ram, int speed) : name_(name), ram_(ram), speed_(speed) {}
    
    // 정보 출력 메서드
    void print() {
        std::cout << "이름: " << getName() << "\n램: " << getRam() << "\n클럭: " << getSpeed() << std::endl;
    }
    
    // setter
    void setRam(int num) { this->ram_ = num; }
    void setName(std::string name) { this->name_ = name; }
    void setSpeed(double num) { this->speed_ = num; }
    
    // getter
    int getRam() { return ram_; }
    std::string getName() { return name_; }
    double getSpeed() { return speed_; }
};

int main(int argc, const char * argv[]) {
    Pc pc1("PC1", 24, 3.8);
    Pc pc2;
    pc2.setName("PC2");
    pc2.setRam(16);
    pc2.setSpeed(4.7);
    
    pc1.print();
    pc2.print();
    
    return 0;
}
