/*
 * Untitled_03
 * iCAROS7, hominlab@gmail.com
 * main.cpp
 * 20211208 1640
 */

#include <iostream>
#include <vector>
#include <algorithm>

class Student {
    std::string name;
    double mark;
    
public:
    // 생성지
    Student(std::string &name, double &mark) : name(name), mark(mark) {}
    
    // getter
    std::string getName() { return name; }
    double getMark() { return mark; }
    
    // setter
    
    // 정보 출력 메서드
    void print() {
        std::cout << "이름: " << getName() << "\n학점: " << getMark() << std::endl;
    }
};

class Class {
    std::string name;
    std::vector<Student> *students;
    
public:
    Class() : name("이름 없는 학급") { students = new std::vector<Student>; }
    Class(std::string &name, std::vector<Student> &st) : name(name) { students = &st; }
    
    // 학생 추가 메서드
    void addStudent(std::string &name, double &mark) {
        students->push_back(*new Student(name, mark));
    }
    
    // 학생 제거 메서드
    void removeStudent() { students->pop_back(); }
    void removeStudent(int cursor) { students->erase(students->begin() + cursor); }
    
    // sort 메서드
    void sortVector() { sort(students->begin(), students->end(), compareMark); }
    
    // 학생 정보 출력 메서드
    void print() {
        std::cout << name << "반" << std::endl;
        for(Student &i : *students) {
            i.print();
            std::cout << std::endl;
        }
    }
    
    static bool compareMark(Student &master, Student &slave) { return master.getMark() < slave.getMark(); }
    
    // getter
    long getStudentNum() { return students->size(); }
};

int main(int argc, const char * argv[]) {
    std::string className;
    std::string studentName;
    std::vector<Student> st;
    double mark;
    
    std::cout << "학급 이름: ";
    std::cin >> className;
    
    Class newclass(className, st);
    
    while(1) {
        std::cout << "이름 학점: ";
        std::cin >> studentName >> mark;
        if (studentName == "-1" || mark == -1) { break; }
        newclass.addStudent(studentName, mark);
    };
    
    newclass.sortVector();
    newclass.print();
    
    return 0;
}
