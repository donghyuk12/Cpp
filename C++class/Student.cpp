#include<iostream>
using namespace std;

class Student {
private:
	char name[30];
	int ban;
	int no;
	int kor;
	int eng;
	int math;
public:
	Student(const char* name, int ban, int no) {
		strcpy_s(this->name,30,name);
		this->ban = ban;
		this->no = no;
		kor = -1;
		eng = -1;
		math = -1;
	}
	Student(const char* name, int ban, int no, int kor, int eng, int math) {
		strcpy_s(this->name, 30, name);
		this->ban = ban;
		this->no = no;
		this->kor = kor;
		this->eng = eng;
		this->math = math;

	}
	char* getname() {
		return name;
	}
	int getban() {
		return ban;
	}
	int getkor() {
		return kor;
	}
	int geteng() {
		return eng;
	}
	int getno() {
		return no;
	}
	int getmath() {
		return math;
	}
	int getTotal() {
		return kor + eng + math;
	}
	float getAverage() {
		return (kor + eng + math) / 3;
	}
	void setStudent(const char* name, int ban, int no, int kor, int eng, int math) {
		strcpy_s(this->name, 30, name);
		this->ban = ban;
		this->no = no;
		this->kor = kor;
		this->eng = eng;
		this->math = math;
	}
};
//int main() {
//	Student p1;
//	strcpy_s(p1.name, 30, "ö��");
//	p1.kor = 80; p1.eng = 80; p1.math = 80;
//	cout << p1.name << " : ���� - " << p1.getTotal() << "��, ��� - " << p1.getAverage() << "��" << endl;
//
//	Student p2;
//	strcpy_s(p2.name, 30, "����");
//	p2.kor = 90; p2.eng = 90; p2.math = 90;
//	cout << p2.name << " : ���� - " << p2.getTotal() << "��, ��� - " << p2.getAverage() << "��" << endl;
//
//	return 0;
//}