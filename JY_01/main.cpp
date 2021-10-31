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
	int count = 0; // ������ ����
	int* ary; // �迭�� ptr

public:
	// �⺻ ������
	Array(int num) {
		this->count = num;
		ary = new int[num]; // �޸� ���� �Ҵ�
		for (int i = 0; i < num; i++) { ary[i] = i; } // �⺻ �� ����
	}

	// ���� ������
	Array(Array& arr) {
		this->count = arr.count;
		ary = new int[this->count];
		for (int i = 0; i < count; i++) { this->ary[i] = arr.ary[i]; }
	}

	// �Ҹ���
	~Array() {
		delete[] ary; // ���� �޸� ��ȯ
	}

	/// <summary>
	/// �ش�Ǵ� ������ ���� Replace �ϴ� �޼���
	/// </summary>
	/// <param name="num">���� ��ġ</param>
	/// <param name="value">�ٲ� ��</param>
	/// <returns>ü�̴��� ���� this ��ȯ</returns>
	Array& Set(int num, int value) {
		this->ary[num] = value;
		return *this;
	}

	/// <summary>
	/// ��ü�� �迭 ������ ����Ʈ �ϴ� �޼���
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