#include<iostream>
using namespace std;
#define SQUARE(a) a*a
inline int Square(int a) {
	return a * a;
}//인라인 함수는 매크로 함수와 다르게 타입을 검사한다.
//int main()
//{
//	cout << Square(2.2) << endl;
//	cout << SQUARE(5) << endl;
//	cout << SQUARE(2.2);
//	return 0;
//
//}