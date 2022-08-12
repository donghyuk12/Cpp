#include<iostream>
using namespace std;

class SimpleClass {
	int num1;
	int num2;
public:
	SimpleClass() {
		num1 = 0;
		num2 = 0;
	}
	SimpleClass(int n) {
		num1 = n;
		num2 = 0;
	}
	SimpleClass(int n, int n1) {
		num1 = n;
		num2 = n1;
	}
	void ShowData() const {
		cout << num1 << ' ' << num2 << endl;
	}
};
void Simple() {
	SimpleClass sc1;
	sc1.ShowData();

	SimpleClass sc2(100);
	sc2.ShowData();

	SimpleClass sc3(100,200);
	sc3.ShowData();
	//¿À·ù
	//SimpleClass sc4();
	//sc4.ShowData();
	SimpleClass* ptr1 = new SimpleClass;
	ptr1->ShowData();
	SimpleClass* ptr2 = new SimpleClass();
	ptr2->ShowData(); 

	SimpleClass* ptr3 = new SimpleClass(300);
	ptr3->ShowData();
	SimpleClass* ptr4 = new SimpleClass(300,400);
	ptr4->ShowData();

	delete ptr1;
	delete ptr2;
	delete ptr3;
	delete ptr4;
}
//int main() {
//
//	Simple();
//
//	return 0;
//}