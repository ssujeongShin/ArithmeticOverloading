#include "InheritTime.h"

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
};
//(ȣ���� Time ��ü)      (�Ű������� ���� TIme ��ü
Time Time::operator+(Time& t) {
	Time sum; // ȣ���� Time ��ü + �Ű������� ���� Time ��ü�� ���ؼ� ���ο� Time ��ü�� sum�� ����
	sum.mins = mins + t.mins; // ���� ���� ����
	sum.hours = hours + t.hours; // ���� ���� ����
	sum.hours += sum.mins / 60;
	sum.mins %= 60;
	return sum;
};
void Time::show() {
	std::cout << "�ð� : " << hours << std::endl;
	std::cout << " �� : " << mins << std::endl;
}
Time::~Time()
{

};
// friend �Լ�
Time Time::operator*(int n) {
	Time result; // ���ο� Time ��ü ����
	long resultMin = hours * n * 60 + mins * n;
	result.hours = resultMin / 60;
	result.mins = resultMin % 60;
	return result;
}
std::ostream& operator<<(std::ostream& os, Time& t) {
	os << t.hours << "�ð�" << t.mins << "��";
	return os;
}
/*
	�Ļ� Ŭ���� ����	
	-> �Ļ� Ŭ������ public�� ���� �޼������ ���� ʦ
		but, private�� �ִ� ����������� ���� ���� ��ʦ
*/
NewTime::NewTime() : Time(){
/*
	��� ���Ͽ��� ������ NewTimeŬ������ �ִ�
	private ��� ���� + ������ Time Ŭ������ private ������� ��� ʦ
	�Ű������� ������ ���� �ʾұ⶧���� hours, mins, days�� ���� �ʱ�ȭ�������

*/
	days = 0; // Time��ü�� ������� ��ܿ��� �ʱ�ȭ�� ����⶧���� days�� �ʱ�ȭ���ָ� ��
}
NewTime::NewTime(int h, int m, int d) : Time(h, m){
// �Ű������� �ִ� Ŭ������ ������ ��������� ���� �����������
	days = d; // �̹� �ٸ� �Ű��������� ���Ե����� d�� �������ָ��
}
void NewTime::print() {
	std::cout << "�� : " << days << std::endl;
	show(); // Time Ŭ������ �ִ� show�Լ� ȣ���ؼ� �ð�, �� ���
}