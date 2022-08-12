#include "score.h"
using namespace std;
STUDENT g_student[MAX_DATA];
int cnt = 0;
//STUDENT::STUDENT(const char* name, int num, int k, int m, int e) {
//		strcpy_s(this->name, 50, name);
//		this->num = num;
//		this->k = k;
//		this->m = m;
//		this->e = e;
//		this->avg = (double)((this->k + this->m + this->e) / 3);
//}
//STUDENT::STUDENT(/*const char* name, int num, int k, int m, int e*/) {
//	cout << "이름 입력: " << endl;
//	cin >> this->name;
//	cout << "번호 입력: " << endl;
//	cin >> this->num;
//	cout << "국어점수: " << endl;
//	cin >> this->k;
//	cout << "수학점수: " << endl;
//	cin >> this->m;
//	cout << "영어점수: " << endl;
//	cin >> this->e;
//	this->avg = (double)((this->k + this->m + this->e) / 3);
//	//strcpy_s(this->name, 50, name);
//	//this->num = num;
//	//this->k = k;
//	//this->m = m;
//	//this->e = e;
//	//this->avg = (double)((this->k + this->m + this->e) / 3);
//}
void STUDENT::setstudent(const char* name, int num, int k, int m, int e) {
	strcpy_s(this->name, 50, name);
	this->num = num;
	this->k = k;
	this->m = m;
	this->e = e;
	this->avg = (double)(k + m + e) / 3;
}

void showMenu() {
	cout << "1. 데이터 입력"<< endl;
	cout << "2. 입력한 모든 정보 출력" << endl;
	cout << "3. 이름으로 검색하기" << endl;
	cout << "4. 번호로 검색하기" << endl;
	cout << "5. 이름 입력 후 각 과목 점수와 평균 출력" << endl;
	cout << "6. 평균 점수가 높은 순으로 이름을 출력" << endl;
	cout << "종료를 원하시면 q 또는 Q를 누르세요" << endl;
}
void selectMenu() {
	while (1) {
		char menu;
		cout << "메뉴를 선택, q나 Q 입력 전까지 반복 : " << endl;
		cin >> menu;
		runMenu(menu);
	}
}

void runMenu(char menu) {
	switch (menu) {
	case '1':
		func_1();
		break;
	case '2':
		func_2();
		break;
	case '3':
		func_3();
		break;
	case '4':
		func_4();
		break;
	case '5':
		func_5();
		break;
	case '6':
		func_6();
		break;
	case 'q':
	case 'Q':
		exit(1);
	default:
		cout << "종료를 원하시면 q나 Q를 입력하세요" << endl;
		break;
	}
}

void STUDENT::showstudent() {
	cout << "이름: " << name << " 번호: " << num << " 국어: " << k << " 수학: " << m << " 영어: " << e << " 평균: " << avg << endl;
}
void STUDENT::showavg() {
	cout<<"이름: "<<name<<"국어: " << k << " 수학: " << m << " 영어: " << e << " 평균: " << avg << endl;
}
void STUDENT::shownameavg() {
	cout << "이름: " << name << " 평균: " << avg << endl;
}
void func_1() {
	if (cnt == MAX_DATA) {
		cout << "더 이상 추가 할 수 없습니다." << endl;
	}
	else {
		char name[50];
		int num, k, m, e;
		cout << "이름 입력: " << endl;
		cin >> name;
		cout << "번호 입력: " << endl;
		cin >> num;
		cout << "국어점수: " << endl;
		cin >> k;
		cout << "수학점수: " << endl;
		cin >> m;
		cout << "영어점수: " << endl;
		cin >> e;
		g_student[cnt].setstudent(name, num, k, m, e);
		cnt++;
	}
}
void func_2() {
	if (cnt == 0) {
		printf("입력된 정보가 없습니다.\n");
		return;
	}
	printf("\n2. 입력한 모든 정보 출력\n");
	for (int i = 0; i < cnt; i++) {
		g_student[i].showstudent();
	}

}
char* STUDENT::getname() {
	return name;
}
int STUDENT::getnum() {
	return num;
}
int STUDENT::getk() {
	return k;
}
int STUDENT::getm() {
	return m;
}
int STUDENT::gete() {
	return e;
}
double STUDENT::getavg() {
	return avg;
}
void func_3() {
	char search[50];
	cout << "이름 입력: ";
	cin >> search;
	for (int i = 0; i < cnt; i++) {
		if (strcmp(search, g_student[i].getname()) == 0) {
			g_student[i].showstudent();
		}
	}
}
void func_4() {
	int num;
	cout << "번호 입력: ";
	cin >> num;
	for (int i = 0; i < cnt; i++) {
		if (num==g_student[i].getnum()) {
			g_student[i].showstudent();
		}
	}
}
void func_5() {
	char search[50];
	cout << "이름 입력: ";
	cin >> search;
	for (int i = 0; i < cnt; i++) {
		if (strcmp(search, g_student[i].getname()) == 0) {
			g_student[i].showavg();
		}
	}
}
void func_6() {
	STUDENT* temp = new STUDENT;
	for (int i = 0; i < cnt; i++) {
		for (int j = 0; j < cnt - 1; j++) {
			if (g_student[j].getavg() < g_student[j + 1].getavg()) {
				*temp = g_student[j];
				g_student[j] = g_student[j + 1];
				g_student[j + 1] = *temp;
			}
		}
		g_student[i].shownameavg();
	}
	delete temp;

}
