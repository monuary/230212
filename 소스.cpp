//������ ������ :�� �����ϴ� ���� ��� �̴ϼȶ�������� �Ѵ�. ���ǰ� �����Ѹ�ŭ �ʱ�ȭ ���� �����ϴ�.
// const ������ �̴ϼȶ������� �ʱ�ȭ ����
//�����ڸ� �������� ������ ����Ʈ �����ڰ� �ڵ� ���Եȴ�.

#include<iostream>
using namespace std;

class FruitSeller
{
	const int APPLE_PRICE;
	int numOfApples;
	int myMoney;
public:
	FruitSeller(int price,int num,int money):APPLE_PRICE(price),numOfApples(num),myMoney(money){}	//�̷������� const �ʱ�ȭ ����.
};