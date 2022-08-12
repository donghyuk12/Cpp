#include<iostream>
using namespace std;

class Person {
	char* name;
	int age;
public:
	Person(const char* myname, int myage) {
		
		//char *ptr= new char[strlen(myname) + 1];
		name = new char[strlen(myname) + 1];
		strcpy_s(name, strlen(myname) + 1, myname);
		this->age = myage;
	}
	void ShowPersonInfo() {
		cout << name << ' ' << age << endl;
	}
	~Person() {
		delete[]name;
		cout << "!";
	}
};
//int main() {
//
//	Person s1("asdfg", 5);
//	s1.ShowPersonInfo();
//	return 0;
//}