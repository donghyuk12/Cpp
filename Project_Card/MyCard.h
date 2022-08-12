#pragma once

class Card {
private:
	char *ptr;
	int num;
public:
	Card(const char* ptr, int num);
	void showCard();
	char* getptr();
	int getnum();
	void setCard(int num, const char* ptr);
	~Card();
};
void CD();
