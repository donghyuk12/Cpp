#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include<string.h>
#include<stdlib.h>
using namespace std;
typedef struct people {
	char name[7];
	char pnumber[14];
	int age;
}people;
int getSum(int a, int b) {
	return a + b;
}
double getSum(double a, double b) {
	return a + b;
}
void swap(char* a, char* b) {
	char temp = *a;
	*a = *b;
	*b = temp;
}
void swap(int* a, int* b) {
	int temp = *a;
	*a = *b;
	*b = temp;
}
void swap(double* a, double* b) {
	double temp = *a;
	*a = *b;
	*b = temp;
}
int simple(int a = 10) {
	return a + 1;
}
int simple11(int a) {
	return 10;
}
int Pb1(int& num) {
	num = num++;
	return num;
}
void Pb1_1() {
	int num = 10;
	int& ref = num;
	Pb1(ref);
	cout << ref << endl;
}
int Pb2(int& num) {
	num = -num;
	return num;
}
void Pb2_1() {
	int num = 10;
	int& ref = num;
	Pb2(ref);
	cout << ref << endl;
}
void Pb3() {
	const int num = 12;
	const int* data = &num;
	const int*& ref = data;
	cout << *ref << "\n"<< *data << endl;
}
char* Pb4(int len) {
	return new char[len + 1];
}
void Pb4_1() {
	int len;
	cout << "배열 길이 입력 : ";
	cin >> len;
	char* ptr = Pb4(len);
	cin >> ptr;
	cout << "입력한 문자열 : " << ptr << endl;

	delete ptr;
}
typedef struct {
	int xpos;
	int ypos;
}Point;
Point* ptr = new Point;
Point& Pb5(const Point& ptr1, const Point& ptr2) {
	ptr->xpos = ptr1.xpos + ptr2.xpos;
	ptr->ypos = ptr1.ypos + ptr2.ypos;
	return *ptr;
}
void Pb5_1() {
	Point* ptr1 = new Point;
	ptr1->xpos = 10;
	ptr1->ypos = 20;
	Point* ptr2 = new Point;
	ptr2->xpos = 30;
	ptr2->ypos = 40;
	
	Point &ref=Pb5(*ptr1, *ptr2);
	cout << ref.xpos << " " << ref.ypos << endl;

	delete ptr1;
	delete ptr2;
	delete& ref;
}

//int main() 
//{
//	as();
//	return 0;
//}