#include<iostream>;
using namespace std;

class MyCar {
protected:
	int dorNum;
	char color[30];

public:
	MyCar() {
		this->dorNum = 2;
		strcpy_s(this->color, 30, "black");
	}
	MyCar(int num, const char* str) {
		this->dorNum = num;
		strcpy_s(this->color, 30, str);
	}
	void showCarInfo_1() {
		cout << "문 개수: " << dorNum << ", 자동차 색깔: " << color << endl;
	}
};
class MySunRoofCar : public MyCar {
	bool bSunRoof=false;
public:
	bool isSunRoof() {
		return bSunRoof;
	}
	MySunRoofCar(int num, const char* str, bool bRoof) :MyCar(num, str) {
		//this->dorNum = num;
		//strcpy_s(this->color, 30, str);
		this->bSunRoof = bRoof;
	}
	void showCarInfo_1() {
		cout << "문 개수: " << dorNum << ", 자동차 색깔: " << color;
		if (bSunRoof) cout << "  썬루프 있음";
		else cout << "  썬루프 없음";
	}
	};
//int main()
//{
//	MyCar car1(4, "white");
//	car1.showCarInfo_1();
//	MyCar car2(3, "red");
//	car2.showCarInfo_1();
//	MySunRoofCar car3(3,"black",true);
//	car3.showCarInfo_1();
//
//	return 0;
//}