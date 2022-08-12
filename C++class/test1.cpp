#include<iostream>
#include<string.h>
using namespace std;

void as() {
	char* ptr = new char;
	cin >> ptr;
	cout << ptr << endl;
	delete ptr;
}
//int main()
//{
//	as();
//	return 0;
//}