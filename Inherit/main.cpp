#include <iostream>
#include "InheritTime.h"
using namespace std;

int main() {
	/*
		상속
		상속을 사용하는 이유?
		1. 기존의 클래스에 새로운 기능 추가 可
		2. 클래스가 나타내고 있는 데이터에 다른 것을 더 추가 可
		3. 클래스 메서드가 동작하는 방식 변경 可

		상속 하는 클래스 -> 기초클래스
		상속 받는 클래스 -> 파생클래스
	*/
	NewTime temp1();
	NewTime temp2(3, 30, 3);
	temp2.print();
	return 0;
}