//생성자 밑으로 :로 정의하는 것을 멤버 이니셜라이저라고 한다. 정의가 가능한만큼 초기화 역시 가능하다.
// const 변수도 이니셜라이저로 초기화 가능
//생성자를 정의하지 않으면 디폴트 생성자가 자동 삽입된다.

#include<iostream>
using namespace std;

class FruitSeller
{
	const int APPLE_PRICE;
	int numOfApples;
	int myMoney;
public:
	FruitSeller(int price,int num,int money):APPLE_PRICE(price),numOfApples(num),myMoney(money){}	//이런식으로 const 초기화 가능.
};