#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include<string.h>
#include<stdlib.h>
using namespace std;

int Adder(int num1 = 1, int num2 = 2);
int Adder(int num1, int num2) {
	return num1 + num2;
}

int BoxVolume(int length, int width = 1, int height = 1);
int BoxVolume(int length, int width, int height) {
	return length * width * height;
}

void BoxVolume_main() {
	cout << "[3,3,3] : " << BoxVolume(3, 3, 3) << endl;
	cout << "[5,5,D] : " << BoxVolume(5, 5) << endl;
	cout << "[5,D,D] : " << BoxVolume(7) << endl;
	//cout << "[D,D,D] : " << BoxVolume() << endl; 에러
}
int BoxVolume_1(int length, int width, int height) {
	return length * width * height;
}
int BoxVolume_1(int length, int width) {
	return length * width * 1;
}
int BoxVolume_1(int length) {
	return length * 1 * 1;
}

void BoxVolume_1_main() {
	cout << "[3,3,3] : " << BoxVolume_1(3, 3, 3) << endl;
	cout << "[5,5,D] : " << BoxVolume_1(5, 5) << endl;
	cout << "[5,D,D] : " << BoxVolume_1(7) << endl;
}
int SimpleFunc(int a = 10) {
	return a + 1;
}
int SimpleFunc() {
	return 10;
}
//int main()
//{
//	/*SimpleFunc(); */ /*둘다 접근할 수 있기 때문에 오류 SimpleFunc();*/
//	return 0;
//}

