#include <iostream>
#ifndef TIMEH // 만약 TIMEH 매크로가 정의돼있다면 다음 로직들을 실행하라
#define TIMEH // TIMEH를 사용해야하는 경우에 #define으로 작성

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
	// int형을 사용하기 위한 friend 사용
	/*
		friend로 선언 된 변수의 의미
		1. operator*는 public함수에 선언 되었지만 멤버변수가 될 수는 없음
			따라서, . 이나 ->를 사용하여 호출할 수 없음
		2. private 영의 멤버 변수에 접근 可
	*/
	/*
		friend 속성을 가진 함수를 사용하려면 멤버변수가 아니기때문에
		사용범위 결정 연산자인 ::을 사용 X 또한, friend라는 키워드도 사용 X
	*/
	friend Time operator*(int, Time&);
};


#endif // !TIMEH


