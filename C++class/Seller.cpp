#include<iostream>
using namespace std;

class Seller {
	int price;
	int numOfProduct;
	int myMoney;
public:
	Seller(int price, int num, int money) : price(price), numOfProduct(num), myMoney(money)
	{

	}
	void ShowSalesResult() const {
		cout << "상품가격: " << price << endl;
		cout << "상품개수: " << numOfProduct << endl;
		cout << "현금: " << myMoney << endl;
	}
};
void Sel() {
	Seller s1(100, 200, 300);
	s1.ShowSalesResult();
}
void up(char* str1, char* str2) {
	int i = 0;
	while ('\0' != *(str2 + i)) {
		*(str1 + i) = *(str2 + i) - 32;
		i++;
	}
	*(str1 + i) = '\0';
}
//int main() {
//	char* ptr1 = new char[10];
//	char* ptr2 = new char[10];
//	cin >> ptr2;
//	up(ptr1, ptr2);
//	cout << ptr2 << "\n" << ptr1 << endl;
//	delete[]ptr1;
//	delete[]ptr2;
//	return 0;
//}