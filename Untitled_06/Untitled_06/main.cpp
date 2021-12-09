/*
 * Untitled_06
 * iCAROS7, hominlab@gmail.com
 * main.cpp
 * 20211209 0030
 */

#include <iostream>
#include <fstream>

int main(int argc, const char * argv[]) {
    std::ifstream is { "input.txt" };
    std::ofstream os { "output.txt" };

    if (!os || !is) {
        std::cerr << "파일 열기 실패" << std::endl;
        exit(1);
    }
    
    is.seekg(0, std::ios::end);
    
    char c;
    for (int i = (int)is.tellg() - 1; i >= 0; i--) {
        is.seekg(i, std::ios::beg);
        is.get(c);
        std::cout << c;
        os << c;
    }
    
    std::cout << std::endl;
    
    return 0;
}
