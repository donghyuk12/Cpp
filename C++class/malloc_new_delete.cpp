#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include<string.h>
#include<stdlib.h>
using namespace std;

void func2_1_1() {

	char* name = new char[10];
	cout << "�̸��� �Է��ϼ��� : ";
	cin >> name;
	cout << "�̸��� : " << name << endl;
	delete[] name;
	//free(name);
}
char* MakeStrAdr(int len) {
	char* str = (char*)malloc(sizeof(char) * len);
	return str;
}
void func2_1_2() {
	char* str = MakeStrAdr(20);
	strcpy(str, "hello CPP~");
	cout << str << endl;
	free(str);
}
char* MakeStrNew(int len) {
	char* str = new char[len];
	return str;
}
void func2_1_3() {
	char* str = MakeStrNew(20);
	strcpy(str, "hello CPP~");
	cout << str << endl;
	delete[]str;
}

void func2_2_1() {
	int* num = new int[10];

	for (int i = 0; i < 10; i++) {
		*(num + i) = i + 1;
		cout << *(num + i) << " ";
	}

	delete[]num;
}
void func2_2_2() {
	char* arr = new char[32];
	cout << "�̸��� �Է��ϼ��� : ";
	cin >> arr;
	cout << arr << endl;
	delete[]arr;
}
typedef struct ptr {
	char name[7];
	char number[14];
	int age;
}ptr;
void func2_2_3() {
	ptr* pptr = new ptr;
	strcpy(pptr->name, "ȫ�浿");
	strcpy(pptr->number, "010-1234-5678");
	pptr->age = 26;
	cout << "�̸� : " << pptr->name << "\n����ó : " << pptr->number << "\n���� : " << pptr->age << endl;
	delete[]pptr;
}
