#include<iostream>
using namespace std;

namespace NameSpace1 {
	void function();
	/*	cout << "NameSpace1�� function" << endl;*/
}
namespace NameSpace2 {
	void function();
		/*cout << "NameSpace2�� function" << endl;*/
}
void NameSpace1::function() {
	cout << "NameSpace1�� function" << endl;
}
void NameSpace2::function() {
	cout << "NameSpace2�� function" << endl;
}
//int main() {
//	/*NameSpace1::function();
//	NameSpace2::function();*/
//
//	return 0;
//}

