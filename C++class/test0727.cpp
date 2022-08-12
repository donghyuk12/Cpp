#include<iostream>
using namespace std;
bool isSameString(const char* str1, const char* str2) {
	int i = 0;
	while ('\0' != *(str1 + i) || '\0' !=*(str2 + i)) {
		if (*(str1 + i) != *(str2 + i)) {
			return false;
		}
		i++;
	}
		//if(*(str1 + i)=='\0' && *(str2 + i)=='\0') {
		//	return true;
		//}
		//i++;
	
	return true;
	}
//3¹ø
int BoxVolume_11(int num, int num1, int num2) {
	return num * num1 * num2;
}
int BoxVolume_11(int num, int num1) {
	return num * num1 * 1;
}
int BoxVolume_11(int num) {
	return num * 1 * 1;
}
//4¹ø
//class Car {
//public:
//	char color[30];
//	int dorNum;
//	void showCarInfo() {
//		cout << dorNum << " " << color << endl;
//	}
//};
//int main()
//{
//	Car car;
//	strcpy_s(car.color, 30, "white");
//	car.dorNum = 4;
//	car.showCarInfo();
//	//cout << isSameString("hello", "hello") << endl;
//	//2¹ø
//	/*char* ptr = new char[30];
//	cin >> ptr;
//	cout << ptr << endl;
//	delete[30]ptr;
//	return 0;*/
//	return 0;
//}