#include <stdio.h>
#include <iostream>
#include <stdlib.h>
using namespace std;

/*
   '유클리드호제법'으로 최대공약수 구할 수 있음
   두 수 나눠서 나머지 없으면 나눈 수가 최대공약수, 있으면 작은 수와 나머지를 다시 나눠서 반복
*/

//반복문
int GCD(int num1, int num2)
{
	int temp;

	while (num1%num2 != 0)
	{
		temp = num1;
		num1 = num2;
		num2 = (temp%num2);
	}

	return num2;
}


//재귀함수
int GCD2(int num1, int num2)
{
	if (num1%num2 == 0)
		return num2;

	return GCD2(num2, num1%num2);
}

//삼항 연산자+재귀
int GCD3(int num1, int num2)
{
	return num1%num2 == 0 ? num2 : GCD3(num2, num1%num2);
}
