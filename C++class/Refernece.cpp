#include<iostream>
using namespace std;

void alias() {
	int num1 = 1020;
	int& num2 = num1;

	num2 = 3047;
	cout << "VAL: " << num1 << endl;
	cout << "REF: " << num2 << endl;

	cout << "VAL: " << &num1 << endl;
	cout << "REF: " << &num2 << endl;
}
void SwapByRef2(int& ref1, int& ref2) {
	int temp = ref1;
	ref1 = ref2;
	ref2 = temp;
}
int& RefRetFuncOne(int& ref) {
	ref++;
	return ref;
}
void One() {
	int num1 = 1;
	int& num2 = RefRetFuncOne(num1);
	num1++;
	num2++;
	cout << num1 << endl;
	cout << num2 << endl;
	cout << &num1 << endl;
	cout << &num2 << endl;

}
void One_1() {
	int num1 = 1;
	int num2 = RefRetFuncOne(num1);
	num1++;
	num2++;
	cout << num1 << endl;
	cout << num2 << endl;
	cout << &num1 << endl;
	cout << &num2 << endl;
}
int Ref_1(int& a) {
	a = a++;
	return a;
}
void Ref_1_1() {
	//1번
	int a = 10;
	Ref_1(a);
	cout << a << endl;
}
int Ref_2(int& b) {
	b = -b;
	return b;
}
void Ref_2_1() {
	//2번
	int b = 10;
	Ref_2(b);
	cout << b << endl;
}
void Ref_3() {
	//3번
	const int num = 12;
	const int* arr = &num;
	const int* (&ref) = arr;
	cout << *ref << endl;
	cout << *arr << endl;	
}
char* Ref_4 (int len) {	
	return new char[len + 1];
}
void Ref_4_1() {
	//4번
	int len;
	cout << "배열 크기: ";
	cin >> len;

	char* ptr = Ref_4(len);
	cin >> ptr;
	cout << ptr << endl;

	delete ptr;
}
char* Ref_4_2_1(int len) {
	return new char[len + 1];
}

void Ref_4_2() {
	int len;
	cout << "생성할 배열의 크기를 입력 : ";
	cin >> len;
	char* ptr = Ref_4_2_1(len);
	cin >> ptr;
	cout <<"입력한 문자열 : "<< ptr << endl;
	delete[]ptr;

}
typedef struct {
	int xpos;
	int ypos;
}Point;
Point& PntAdder(const Point &ptr1, const Point &ptr2) {
	Point* ptr = new Point;
	ptr->xpos = ptr1.xpos + ptr2.xpos;
	ptr->ypos = ptr1.ypos + ptr2.ypos;
	return *ptr;
}
void Ref5() {
	Point* ptr1 = new Point;
	ptr1->xpos = 10;
	ptr1->ypos = 20;
	Point* ptr2 = new Point;
	ptr2->xpos = 30;
	ptr2->ypos = 40;
	Point& ref = PntAdder(*ptr1, *ptr2);
	cout << ref.xpos << " " << ref.ypos << endl;
	delete ptr1;
	delete ptr2;
	delete& ref;
}
void Ref6() {
	double d = 3.1;
	double& ref = d;
	cout << d << endl;
	cout << ref << endl;

	cout << &d << endl;
	cout << &ref << endl;

}
void Ref7() {
	char c1 = 'A';
	char& ref1 = c1;
	char& ref2 = c1;

	cout << c1 << endl;
	cout << ref1 << endl;
	ref2++;
	cout << 'B' << " B" << endl;
	cout << c1 << endl;
	cout << ref1 << endl;
}
void increVal(int& val) {
	val++;
}
void convVal(int& val) {
	val = -val;
}

void test_incre_conv() {
	int num = 1;
	increVal(num);
	cout << num << endl;

	convVal(num);
	cout << num << endl;

}
void swap1(int& n1, int& n2) {
	int temp;
	temp = n1;
	n1 = n2;
	n2 = temp;
}
void swap2(int* n1, int* n2) {
	int temp = *n1;
	*n1 = *n2;
	*n2 = temp;
}
void test_swap() {
	int num = 1;
	int num1 = 2;
	cout <<"Before " << num << ' ' << num1 << endl;
	swap2(&num, &num1); //swap1(num, num1);
	cout << "After  " << num << ' ' << num1 << endl;
}
void Ref8() {
	const int num = 12;
	const int* ptr = &num;
	const int*& ref = ptr;

	cout << *ptr << endl;
	cout << *ref << endl;
	cout << ptr << endl;
	cout << ref << endl;
}
typedef struct {
	int xpos;
	int ypos;
}Point1;
Point1& PntAdder(const Point1& ptr1, const Point1& ptr2) {
	Point1* ptr = new Point1;
	ptr->xpos = ptr1.xpos + ptr2.xpos;
	ptr->ypos = ptr1.ypos + ptr2.ypos;
	return *ptr;
}
void pntadder() {

	Point1* ptr1 = new Point1;
	ptr1->xpos = 10;
	ptr1->ypos = 20;
	Point1* ptr2 = new Point1;
	ptr2->xpos = 30;
	ptr2->ypos = 40;

	Point1& ref = PntAdder(*ptr1, *ptr2);
	cout << ref.xpos << ' ' << ref.ypos << endl;
	delete ptr1;
	delete ptr2;
	delete& ref;
}
typedef struct {
	char name[100];
	int kor;
	int eng;
}Student;
void setScore(Student& s, const char* name, int kor, int eng) {
	strcpy_s(s.name,100, name);
	s.kor = kor;		
	s.eng = eng;		
}
typedef struct {
	char shape[100];
	int number;
}CARD_1;
//void setCard(CARD_1& a, const char* ptr, int num) {
//	strcpy_s(a.shape, 100, ptr);
//	a.number = num;
//}
//void card() {
//	char ptr[100];
//	int num;
//	cout << "모양 입력: ";
//	cin >> ptr;
//	cout << "번호 입력: ";
//	cin >> num;
//	CARD_1 a;
//	setCard(a, ptr, num);
//	cout << "모양: " << a.shape << " 번호: " << a.number << endl;
//}
class Tv {
private:
	int volumn;
	int channel;
public:
	void setChannel(int c) {
		channel = c;
	}
	void setVolumn(int v) {
		volumn = v;
	}
	void showInfo() {
		cout << channel << ", " << volumn << endl;
	}
};
void setTv(Tv& t, int c, int v) {
	t.setChannel(c);
	t.setVolumn(v);
}
void tv() {
	int c, v;
	cout << "channel 입력: ";
	cin >> c;
	cout << "volumn입력: ";
	cin >> v;
	Tv t;
	setTv(t, c, v);
	t.showInfo();
}

class Card_2{
public:
	char Shape[30];
	int number;

public:

	Card_2(const char* str, int number) {
		strcpy_s(this->Shape,30,str);
		this->number = number;
	}
	void printCard() {
		cout << Shape << ", " << number << endl;
	}
};
//사용자로부터 모양과 번호를 입력받음
//new로 카드 객체를 생성해서 입력받은 모양과 번호를 설정
//카드객체를 레퍼런스 변수로 반환

Card_2& setCard() {
	char sp[30];
	int num;
	cout << "모양: ";
	cin >> sp;
	cout << "번호: ";
	cin >> num;
	Card_2* card = new Card_2(sp, num);
	return *card;
}

void test3() {
	Card_2& c = setCard();
	c.printCard();
	//setCard로 카드객체를 반환받아 변수(어떤 타입일까요?)에 저장
	//카드 객체의 printCard를 호출
	//new로 할당한 메모리 삭제
	delete &c;
}
int main()
{
	test3();
	return 0;
}