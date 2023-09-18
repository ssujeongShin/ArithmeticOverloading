#include "TimeFriend.h"
#include <iostream>

using namespace std;

int main() {
		/*
		C++ friend
		-> private�� ��������� �����ϱ����ؼ��� public�� �޼ҵ���� ����ϴ� ������̾�����
		-> c++������ friend�Ӽ��� ����Ͽ� ���� ʦ
		-> � Ŭ���������� reiend�� ����� �ȴٸ�,
		-> Ŭ������ ����������� ������ �Ͱ� ������ ���� ������ ������ ��
		-> ��, public�� ����Լ�ó�� private�� ��������� ���� ʦ
		when?
		�׷��ٸ� ��� ��Ȳ�� friend�Լ��� �ʿ��Ѱ�?
		-> � �����ڰ� ������ �����ε��ϴ� ��쿡 �ʿ伺 ��...?
		what?
		-> ���׿����� : �� ���� �ǿ����ڸ� �䱸�ϴ� ������
	*/

	// operator*�� ����Ѵٸ�?
	/*
		a = b *3�� ���� ������ �����Ϸ��� operator+���� ����ߴ� �Ͱ� ����
		a = b.operator*(3) �̷��� �ۼ��ϸ� �ȴٶ�� ������ ��������
		���� ����.
		why?
		�ǿ����ڰ� Time�� ���ϴ� ��ü���� operator ������ ��� ����
		but, 3�� ��ü�� �ƴ϶� int���� ���ϱ� ������ ��� X
		how?
		���⼭ friend �Ӽ��� ����Ͽ� private�� �ִ� int�� ������ �����ϸ� �� ��
	*/
	Time t1(1, 20);
	Time t2;

	t2 = 3 * t1; // �� �ڵ�� t2 = operator*(3, t1);���� �ؼ���
	t2.show();

	return 0;
}