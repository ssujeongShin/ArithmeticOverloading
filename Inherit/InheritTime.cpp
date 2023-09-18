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
	// 지시받은 시간 + 원래 있던 시간
	hours += h;
};
void Time::addMins(int m) {
	mins += m;
	// if 76min라면 1은  hours에 합해지고, 나머지 16은 mins에 합해짐
	hours += mins / 60; // 60분이 넘으면 1시간이기 때문에 60을 넘겼을때 몫은 hours에 합함
	mins %= 60; // 60분으로 나눈 나머지 분은 그대로 mins에 합
};
//(호출한 Time 객체)      (매개변수로 넣은 TIme 객체
Time Time::operator+(Time& t) {
	Time sum; // 호출한 Time 객체 + 매개변수로 넣은 Time 객체를 더해서 새로운 Time 객체인 sum을 만듦
	sum.mins = mins + t.mins; // 위의 경우와 같음
	sum.hours = hours + t.hours; // 위의 경우와 같음
	sum.hours += sum.mins / 60;
	sum.mins %= 60;
	return sum;
};
void Time::show() {
	std::cout << "시간 : " << hours << std::endl;
	std::cout << " 분 : " << mins << std::endl;
}
Time::~Time()
{

};
// friend 함수
Time Time::operator*(int n) {
	Time result; // 새로운 Time 객체 생성
	long resultMin = hours * n * 60 + mins * n;
	result.hours = resultMin / 60;
	result.mins = resultMin % 60;
	return result;
}
std::ostream& operator<<(std::ostream& os, Time& t) {
	os << t.hours << "시간" << t.mins << "분";
	return os;
}
/*
	파생 클래스 정의	
	-> 파생 클래스는 public에 속한 메서드들은 접근 可
		but, private에 있는 멤버변수들은 직접 접근 不可
*/
NewTime::NewTime() : Time(){
/*
	헤더 파일에서 생성한 NewTime클래스에 있는
	private 멤버 변수 + 기존의 Time 클래스의 private 멤버변수 사용 可
	매개변수를 지정해 주지 않았기때문에 hours, mins, days를 으로 초기화해줘야함

*/
	days = 0; // Time객체의 멤버들은 상단에서 초기화를 해줬기때문에 days만 초기화해주면 됨
}
NewTime::NewTime(int h, int m, int d) : Time(h, m){
// 매개변수가 있는 클래스는 각각의 멤버변수에 값을 대입해줘야함
	days = d; // 이미 다른 매개변수들은 대입돼있음 d만 대입해주면됨
}
void NewTime::print() {
	std::cout << "일 : " << days << std::endl;
	show(); // Time 클래스에 있는 show함수 호출해서 시간, 분 출력
}