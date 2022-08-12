//#include<iostream>
//using namespace std;
//
//class Card {
//private:
//	char ptr[30];
//	int num;
//public:
//	Card(const char* ptr, int num) {
//		strcpy_s(this->ptr, 30, ptr);
//		this->num = num;
//	}
//	void showCard() {
//		cout << ptr << ", " << num << endl;
//	}
//	char* getptr(){
//		return ptr;
//	}
//	int getnum() {
//		return num;
//	}
//	void setCard(int num, const char* ptr) {
//		this->num = num;
//		strcpy_s(this->ptr,30,ptr);
//	}
//};
//void CD() {
//	Card card1("diamond", 7);
//	/*card1.setCard(7, "diamond");*/
//
//	Card card2("heart", 3);
//	//card2.setCard(3, "heart");
//
//	Card card3("clover", 11);
//	//card3.setCard(11, "clover");
//	card1.showCard();
//	card2.showCard();
//	card3.showCard();
//	/*cout << card1.getptr() << ", " << card1.getnum() << endl;
//	cout << card2.getptr() << ", " << card2.getnum() << endl;
//	cout << card3.getptr() << ", " << card3.getnum() << endl;*/
//}
//
////int main()
////{
////	CD();
////	return 0;
////}