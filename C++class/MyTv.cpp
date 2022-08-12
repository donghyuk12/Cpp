#include<iostream>
using namespace std;

class MyTv {
private:
	int channel;
	bool power;
	char color[30];
public:
	void powerOnOff() {
		power = !power;
	}
	void channerUp() {
		channel++;
	}
	void channerlDown() {
		channel--;
	}
	int getchannel() {
		return channel;
	}
	bool getpower() {
		return power;
	}
	char* getcolor() {
		return color;
	}
	MyTv() {
		channel = 0;
		power = false;
		strcpy_s(this->color, 30, "white");

	}
	MyTv(const char *color) {
		channel = 1;
		power = true;
		strcpy_s(this->color, 30, color);
	}
	void setMyTv(int channel, bool power, const char* color) {
		this->channel = channel;
		this->power = power;
		strcpy_s(this->color, 30, color);
	}
	void Tv() {
		cout << channel << ' ' << power << ' ' << color << endl;
	}
};
//int main() {
//	//MyTv t1;
//	//t1.setMyTv(7, 0, "white");
//	//cout <<"전원 : "<<t1.getpower() << ", 채널 : " << t1.getchannel() << ", 색깔 : " << t1.getcolor() << endl;
//
//	//MyTv t2;
//	//t1.setMyTv(11, 1, "red");
//	//cout << "전원 : " << t1.getpower() << ", 채널 : " << t1.getchannel() << ", 색깔 : " << t1.getcolor() << endl;
//	//return 0;
//	MyTv t1;
//	t1.Tv();
//	MyTv t2("black");
//	t2.Tv();
//	return 0;
//}