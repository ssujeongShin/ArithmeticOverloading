#include <iostream>
#ifndef TIMEH
#define TIMEH

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
	Time operator*(int);
	void show();
	~Time();
	friend Time operator*(int n, Time& t) {
		return t * n;
	};
	friend std::ostream& operator<<(std::ostream&, Time&);
};
// 파생클래스 선언 방법
class NewTime : public Time {
	/*
		1. 파생 클래스형의 객체 안에는 기초 클래스형의 데이터 멤버들이 저장됨
		2. 파생 클래스형의 객체는 기초 클래스형의 메서드들을 사용할 수 있음
		3. 파생 클래스는 자기 자신의 생성자를 필요로 함
		4. 파생클래스는 부가적인 데이터 멤버들과 멤버 함수들을 임의로 추가 可
	 */
	private:
		int days;
	public :
		NewTime();
		NewTime(int, int, int);
		void print();
};

#endif // !TIMEH




