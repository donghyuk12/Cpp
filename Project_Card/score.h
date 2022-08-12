#pragma once
#include<iostream>

#define MAX_DATA 3
class STUDENT {
private:
	char name[50];
	int num;
	int k;
	int m;
	int e;
	double avg;
public:
	//STUDENT(const char* name, int num, int k, int m, int e);
	
	char* getname();
	int getnum();
	int getk();
	int getm();
	int gete();
	double getavg();
	void showstudent();
	void showavg();
	void shownameavg();
	void setstudent(const char* name, int num, int k, int m, int e);

};
void func_1();
void func_2();
void func_3();
void func_4();
void func_5();
void func_6();
void showMenu();
void selectMenu();
void runMenu(char a);