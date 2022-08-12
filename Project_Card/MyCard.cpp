#include<iostream>
#include "MyCard.h"
using namespace std;


Card::Card(const char* ptr, int num) {
	this->ptr = new char[30];
	strcpy_s(this->ptr, 30, ptr);
	this->num = num;
}
void Card::showCard() {
	cout << ptr << ", " << num << endl;
}
char* Card::getptr() {
	return ptr;
}
int Card::getnum() {
	return num;
}
void Card::setCard(int num, const char* ptr) {
	this->num = num;
	strcpy_s(this->ptr, 30, ptr);
}
Card::	~Card() {
	delete[] ptr;
	cout << '!';
}
void CD() {
	Card card1("diamond", 7);
	Card card2("heart", 3);
	Card card3("clover", 11);

	card1.showCard();
	card2.showCard();
	card3.showCard();


}
