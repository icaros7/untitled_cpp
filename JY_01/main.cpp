/*
* File: main.cpp
* Date: 2021.10.31 21:46
*
* hominlab@gmail.com, iCAROS7
*/

#include <iostream>

using namespace std;

class Array {
private:
	int count = 0; // 원소의 개수
	int* ary; // 배열용 ptr

public:
	// 기본 생성자
	Array(int num) {
		this->count = num;
		ary = new int[num]; // 메모리 동적 할당
		for (int i = 0; i < num; i++) { ary[i] = i; } // 기본 값 지정
	}

	// 복사 생성자
	Array(Array& arr) {
		this->count = arr.count;
		ary = new int[this->count];
		for (int i = 0; i < count; i++) { this->ary[i] = arr.ary[i]; }
	}

	// 소멸자
	~Array() {
		delete[] ary; // 동적 메모리 반환
	}

	/// <summary>
	/// 해당되는 순서의 값을 Replace 하는 메서드
	/// </summary>
	/// <param name="num">원소 위치</param>
	/// <param name="value">바꿀 값</param>
	/// <returns>체이닝을 위한 this 반환</returns>
	Array& Set(int num, int value) {
		this->ary[num] = value;
		return *this;
	}

	/// <summary>
	/// 객체의 배열 정보를 프린트 하는 메서드
	/// </summary>
	void Print() {
		for (int i = 0; i < this->count; i++) { cout << this->ary[i] << " "; }
		cout << endl;
	}
};

int main() {
	Array ary1(5);
	Array ary2(7);
	Array ary3(ary1);

	ary2.Set(0, 11).Set(1, 12).Set(2, 13);

	ary1.Print();
	ary2.Print();
	ary3.Print();

	return 0;
}