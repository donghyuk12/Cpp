#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include<string.h>
#include<stdlib.h>
using namespace std;

bool IsPositive(int num)
{
	if (num < 0)
		return false;
	else
		return true;
}
void func2_1() {
	bool isPos;
	int num;
	cout << "Input number: ";
	cin >> num;
	isPos = IsPositive(num);
	if (isPos)
		cout << "Positive number" << endl;
	else
		cout << "Negative number" << endl;
}