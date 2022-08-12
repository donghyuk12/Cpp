#include<iostream>;
using namespace std;

class Student {
protected:
	char name[30];
	int id;
public:
	Student(const char* name, int id);

	char* setname(const char* name) {
		strcpy_s(this->name, 30, name);
	}
	int setid(int id) {
		this->id = id;
	}
	char* getname() {
		return name;
	}
	int getid() {
		return id;
	}
	void showStudent() {
		cout << "이름: " << name << " 학번: " << id << endl;
	}

};

class StudentJava : public Student {
private:
	int Java_score;
public:
	StudentJava(const char* name, int id, int Java_score) : Student(name, id) {
		this->Java_score = Java_score;
	}
	void showjava() {
		cout << "이름: " << name << " 학번: " << id << " java점수: "<< Java_score <<endl;
	}
};
class StudentC : Student {
private:
	int C_score;
public:
	StudentC(const char* name, int id, int C_score) : Student(name, id) {
		this->C_score = C_score;
	}
	void showjava() {
		cout << "이름: " << name << " 학번: " << id << " c점수: " <<C_score << endl;
	}
};

//int main() {
//
//	//Student a("임동혁", 20171255);
//	//a.showStudent();
//	StudentJava a("임동혁", 20171255, 20);
//	a.showjava();
//	StudentC b("임동횩", 20181255, 100);
//	b.showjava();
//	return 0;
//}