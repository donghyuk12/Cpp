//#include<iostream>
//using namespace std;
//
//class MyCar {
////public:
//private:
//	char color[30];
//	int dorNum;
//public:
//	void showCar() {
//		cout << "�� ����:" << dorNum << ", �ڵ��� ����:" << color << endl;
//	}
//	int getdorNum() /*const �ϸ� ���� ������ ���� x*/ {
//		dorNum = 3;
//		return dorNum;
//	}
//	char* getcolor() {
//		return color;
//	}
//	void setCarInfo(int dorNum, const char* color) {
//		this->dorNum = dorNum;
//		strcpy_s(this->color, 30, color);
//	}
//	MyCar() {
//		this->dorNum = 4;
//		strcpy_s(this->color, 30, "black");
//	}
//	MyCar(int dorNum, const char* color) {
//		this->dorNum = dorNum;
//		strcpy_s(this->color, 30, color);
//	}
//
//};
//void car() {
//	MyCar car1(2, "black");
//	//MyCar car1;
//	/*strcpy_s(car1.color, 30, "white");
//	car1.dorNum = 4;*/
//	/*car1.setCarInfo(2, "black");*/
//	//MyCar car2;
//	/*strcpy_s(car2.color, 30, "red");
//	car2.dorNum = 3;*/
//	/*car2.setCarInfo(4, "red");*/
//	//MyCar(4, "red");
//	MyCar car2(4, "red");
//	MyCar c;
//	car1.showCar();
//	car2.showCar();
//	c.showCar();
//	//cout << "�� ����:" << car1.getdorNum() << ", �ڵ��� ����:" << car1.getcolor() << endl;
//	//cout << "�� ����:" << car2.getdorNum() << ", �ڵ��� ����:" << car2.getcolor() << endl;
//}
////int main()
////{
////	car();
////	return 0;
////}