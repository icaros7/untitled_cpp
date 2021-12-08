/*
 * Untitled_03
 * iCAROS7, hominlab@gmail.com
 * main.cpp
 * 20211208 1640
 */

#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

class Student {
    string name;
    double mark;
    
public:
    // 생성지
    Student(string &name, double &mark) : name(name), mark(mark) {}
    
    // getter
    string getName() { return name; }
    double getMark() { return mark; }
    
    // setter
    
    // 정보 출력 메서드
    void print() {
        cout << "이름: " << getName() << "\n학점: " << getMark() << endl;
    }
};

class Class {
    string name;
    vector<Student> *students;
    
public:
    Class() : name("이름 없는 학급") { students = new vector<Student>; }
    Class(string &name, vector<Student> &st) : name(name) { students = &st; }
    
    // 학생 추가 메서드
    void addStudent(string &name, double &mark) {
        students->push_back(*new Student(name, mark));
    }
    
    // 학생 제거 메서드
    void removeStudent() { students->pop_back(); }
    void removeStudent(int cursor) { students->erase(students->begin() + cursor); }
    
    // sort 메서드
    void sortVector() { sort(students->begin(), students->end(), compareMark); }
    
    // 학생 정보 출력 메서드
    void print() {
        cout << name << "반" << endl;
        for(Student &i : *students) {
            i.print();
            cout << endl;
        }
    }
    
    static bool compareMark(Student &master, Student &slave) { return master.getMark() < slave.getMark(); }
    
    // getter
    long getStudentNum() { return students->size(); }
};

int main(int argc, const char * argv[]) {
    string className;
    vector<Student> st;
    string studentName;
    double mark;
    
    cout << "학급 이름: ";
    cin >> className;
    
    Class newclass(className, st);
    
    while(1) {
        cout << "이름 학점: ";
        cin >> studentName >> mark;
        if (studentName == "-1" || mark == -1) { break; }
        newclass.addStudent(studentName, mark);
    };
    
    newclass.sortVector();
    newclass.print();
    
    return 0;
}
