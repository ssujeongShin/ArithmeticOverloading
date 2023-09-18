#include "Time.h"
#include <iostream>

using namespace std;

Time::Time()
{
	hours = mins = 0;
}

Time::Time(int h, int m)
{
	hours = h;
	mins = m;
}

void Time::addHours(int h) {
	// ���ù��� �ð� + ���� �ִ� �ð�
	hours += h;
};
void Time::addMins(int m) {
	mins += m;
	// if 76min��� 1��  hours�� ��������, ������ 16�� mins�� ������
	hours += mins / 60; // 60���� ������ 1�ð��̱� ������ 60�� �Ѱ����� ���� hours�� ����
	mins %= 60; // 60������ ���� ������ ���� �״�� mins�� ��
}
//(ȣ���� Time ��ü)      (�Ű������� ���� TIme ��ü
Time Time::operator+(Time& t) {
	Time sum; // ȣ���� Time ��ü + �Ű������� ���� Time ��ü�� ���ؼ� ���ο� Time ��ü�� sum�� ����
	sum.mins = mins + t.mins; // ���� ���� ����
	sum.hours = hours + t.hours; // ���� ���� ����
	sum.hours += sum.mins / 60; 
	sum.mins %= 60;
	return sum;
}
void Time::show() {
	cout << "�ð� : " << hours << endl;
	cout << " �� : " << mins << endl;
}
Time::~Time()
{

};