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
//	cout << "�̸� �Է�: " << endl;
//	cin >> this->name;
//	cout << "��ȣ �Է�: " << endl;
//	cin >> this->num;
//	cout << "��������: " << endl;
//	cin >> this->k;
//	cout << "��������: " << endl;
//	cin >> this->m;
//	cout << "��������: " << endl;
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
	cout << "1. ������ �Է�"<< endl;
	cout << "2. �Է��� ��� ���� ���" << endl;
	cout << "3. �̸����� �˻��ϱ�" << endl;
	cout << "4. ��ȣ�� �˻��ϱ�" << endl;
	cout << "5. �̸� �Է� �� �� ���� ������ ��� ���" << endl;
	cout << "6. ��� ������ ���� ������ �̸��� ���" << endl;
	cout << "���Ḧ ���Ͻø� q �Ǵ� Q�� ��������" << endl;
}
void selectMenu() {
	while (1) {
		char menu;
		cout << "�޴��� ����, q�� Q �Է� ������ �ݺ� : " << endl;
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
		cout << "���Ḧ ���Ͻø� q�� Q�� �Է��ϼ���" << endl;
		break;
	}
}

void STUDENT::showstudent() {
	cout << "�̸�: " << name << " ��ȣ: " << num << " ����: " << k << " ����: " << m << " ����: " << e << " ���: " << avg << endl;
}
void STUDENT::showavg() {
	cout<<"�̸�: "<<name<<"����: " << k << " ����: " << m << " ����: " << e << " ���: " << avg << endl;
}
void STUDENT::shownameavg() {
	cout << "�̸�: " << name << " ���: " << avg << endl;
}
void func_1() {
	if (cnt == MAX_DATA) {
		cout << "�� �̻� �߰� �� �� �����ϴ�." << endl;
	}
	else {
		char name[50];
		int num, k, m, e;
		cout << "�̸� �Է�: " << endl;
		cin >> name;
		cout << "��ȣ �Է�: " << endl;
		cin >> num;
		cout << "��������: " << endl;
		cin >> k;
		cout << "��������: " << endl;
		cin >> m;
		cout << "��������: " << endl;
		cin >> e;
		g_student[cnt].setstudent(name, num, k, m, e);
		cnt++;
	}
}
void func_2() {
	if (cnt == 0) {
		printf("�Էµ� ������ �����ϴ�.\n");
		return;
	}
	printf("\n2. �Է��� ��� ���� ���\n");
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
	cout << "�̸� �Է�: ";
	cin >> search;
	for (int i = 0; i < cnt; i++) {
		if (strcmp(search, g_student[i].getname()) == 0) {
			g_student[i].showstudent();
		}
	}
}
void func_4() {
	int num;
	cout << "��ȣ �Է�: ";
	cin >> num;
	for (int i = 0; i < cnt; i++) {
		if (num==g_student[i].getnum()) {
			g_student[i].showstudent();
		}
	}
}
void func_5() {
	char search[50];
	cout << "�̸� �Է�: ";
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
