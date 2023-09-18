#include "TimeFriend.h"
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
	// 지시받은 시간 + 원래 있던 시간
	hours += h;
};
void Time::addMins(int m) {
	mins += m;
	// if 76min라면 1은  hours에 합해지고, 나머지 16은 mins에 합해짐
	hours += mins / 60; // 60분이 넘으면 1시간이기 때문에 60을 넘겼을때 몫은 hours에 합함
	mins %= 60; // 60분으로 나눈 나머지 분은 그대로 mins에 합
}
//(호출한 Time 객체)      (매개변수로 넣은 TIme 객체
Time Time::operator+(Time& t) {
	Time sum; // 호출한 Time 객체 + 매개변수로 넣은 Time 객체를 더해서 새로운 Time 객체인 sum을 만듦
	sum.mins = mins + t.mins; // 위의 경우와 같음
	sum.hours = hours + t.hours; // 위의 경우와 같음
	sum.hours += sum.mins / 60;
	sum.mins %= 60;
	return sum;
}
void Time::show() {
	cout << "시간 : " << hours << endl;
	cout << " 분 : " << mins << endl;
}
// friend 함수
Time operator*(int n, Time& t) {
	Time result; // 새로운 Time 객체 생성
	long resultMin = t.hours * n * 60 + t.mins * n;
	result.hours = resultMin / 60;
	result.mins = resultMin % 60;
	return result;
}
Time::~Time()
{

};