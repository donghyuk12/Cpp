#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include<string.h>
#include<stdlib.h>
using namespace std;

void func1_1() {
	int num = 20;
	std::cout << "Hello world" << std::endl;
	std::cout << "Hello" << "world" << std::endl;
	std::cout << num << ' ' << 'A';
	std::cout << ' ' << 3.14 << std::endl;

}
void func1_2() {
	int val1;
	std::cout << "ù ��° ���� �Է� : ";
	std::cin >> val1;
	int val2;
	std::cout << "�� ��° ���� �Է� : ";
	std::cin >> val2;

	int result = val1 + val2;
	std::cout << "������� ��� : " << result << std::endl;

}
void func1_3() {
	int val1, val2;
	int result = 0;
	std::cout << "�� ���� ���� �Է� : ";
	std::cin >> val1 >> val2;
	if (val1 < val2) {
		for (int i = val1 + 1; i < val2; i++)
			result += i;
	}
	else
		for (int i = val2 + 1; i < val1; i++)
			result += i;
	std::cout << "�� �� ������ ���� : " << result << std::endl;
}
void func1_4() {
	char name[100];
	char phone[100];
	std::cout << "�̸� �Է�: ";
	std::cin >> name;
	std::cout << "��ȭ��ȣ �Է�: ";
	std::cin >> phone;

	std::cout << "�̸�: " << name;
	std::cout << " ��ȭ��ȣ: " << phone << std::endl;

}
void func1_5() {
	int val1;
	std::cout << "ù ��° ���� �Է� : ";
	std::cin >> val1;
	int val2;
	std::cout << "�� ��° ���� �Է� : ";
	std::cin >> val2;

	int result = val1 + val2;
	std::cout << "������\n" << std::endl;

	std::cout << val1 << '+' << val2 << '=' << result << std::endl;
}
void func1_6() {
	int val1;
	std::cout << "2~9������ ���� �Է� : ";
	std::cin >> val1;
	for (int i = 1; i <= 9; i++) {
		std::cout << val1 << " * " << i << " = " << val1 * i << std::endl;
	}
}