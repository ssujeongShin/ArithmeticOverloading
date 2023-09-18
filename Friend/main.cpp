#include "TimeFriend.h"
#include <iostream>

using namespace std;

int main() {
		/*
		C++ friend
		-> private에 멤버변수에 접근하기위해서는 public의 메소드들을 사용하는 방법뿐이었지만
		-> c++에서는 friend속성을 사용하여 접근 可
		-> 어떤 클래스에대해 reiend로 만들게 된다면,
		-> 클래스에 멤버변수들이 가지는 것과 동등한 접근 권한을 가지게 됨
		-> 즉, public의 멤버함수처럼 private의 멤버변수에 접근 可
		when?
		그렇다면 어떠한 상황에 friend함수가 필요한가?
		-> 어떤 연산자가 이항을 오버로딩하는 경우에 필요성 有...?
		what?
		-> 이항연산자 : 두 개의 피연산자를 요구하는 연산자
	*/

	// operator*를 사용한다면?
	/*
		a = b *3의 경우는 곱셈을 실행하려면 operator+에서 사용했던 것과 같이
		a = b.operator*(3) 이렇게 작성하면 된다라고 생각할 것이지만
		맞지 않음.
		why?
		피연산자가 Time에 속하는 객체여야 operator 연산자 사용 가능
		but, 3은 객체가 아니라 int형에 속하기 때문에 사용 X
		how?
		여기서 friend 속성을 사용하여 private에 있는 int형 변수에 접근하면 될 것
	*/
	Time t1(1, 20);
	Time t2;

	t2 = 3 * t1; // 이 코드는 t2 = operator*(3, t1);으로 해석됨
	t2.show();

	return 0;
}