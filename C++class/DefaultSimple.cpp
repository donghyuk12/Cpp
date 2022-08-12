#include<iostream>
using namespace std;

class SimpleClass_1 {
	int num1;
	int num2;
public:
	SimpleClass_1(int n1 = 0, int n2 = 0) {
		num1 = n1;
		num2 = n2;
	}
	void ShowData() const {
		cout << num1 << ' ' << num2 << endl;
	}
};
void Simple_1() {
	SimpleClass_1 sc1;
	sc1.ShowData();
	SimpleClass_1 sc2(100);
	sc2.ShowData();
	SimpleClass_1 sc3(100,300);
	sc3.ShowData();

}
//int main() {
//	Simple_1();
//	return 0;
//}