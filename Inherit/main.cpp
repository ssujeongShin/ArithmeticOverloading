#include <iostream>
#include "InheritTime.h"
using namespace std;

int main() {
	/*
		���
		����� ����ϴ� ����?
		1. ������ Ŭ������ ���ο� ��� �߰� ʦ
		2. Ŭ������ ��Ÿ���� �ִ� �����Ϳ� �ٸ� ���� �� �߰� ʦ
		3. Ŭ���� �޼��尡 �����ϴ� ��� ���� ʦ

		��� �ϴ� Ŭ���� -> ����Ŭ����
		��� �޴� Ŭ���� -> �Ļ�Ŭ����
	*/
	NewTime temp1();
	NewTime temp2(3, 30, 3);
	temp2.print();
	return 0;
}