#include <iostream>
#ifndef TIMEH // ���� TIMEH ��ũ�ΰ� ���ǵ��ִٸ� ���� �������� �����϶�
#define TIMEH // TIMEH�� ����ؾ��ϴ� ��쿡 #define���� �ۼ�

class Time
{
private:
	int hours;
	int mins;

public:
	Time();
	Time(int, int);
	void addHours(int);
	void addMins(int);
	Time operator+(Time&);
	void show();
	~Time();
	// int���� ����ϱ� ���� friend ���
	/*
		friend�� ���� �� ������ �ǹ�
		1. operator*�� public�Լ��� ���� �Ǿ����� ��������� �� ���� ����
			����, . �̳� ->�� ����Ͽ� ȣ���� �� ����
		2. private ���� ��� ������ ���� ʦ
	*/
	/*
		friend �Ӽ��� ���� �Լ��� ����Ϸ��� ��������� �ƴϱ⶧����
		������ ���� �������� ::�� ��� X ����, friend��� Ű���嵵 ��� X
	*/
	friend Time operator*(int, Time&);
};


#endif // !TIMEH


