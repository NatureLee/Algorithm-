#include <stdio.h>
#include <iostream>
#include <stdlib.h>
using namespace std;

/*
   '��Ŭ����ȣ����'���� �ִ����� ���� �� ����
   �� �� ������ ������ ������ ���� ���� �ִ�����, ������ ���� ���� �������� �ٽ� ������ �ݺ�
*/

//�ݺ���
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


//����Լ�
int GCD2(int num1, int num2)
{
	if (num1%num2 == 0)
		return num2;

	return GCD2(num2, num1%num2);
}

//���� ������+���
int GCD3(int num1, int num2)
{
	return num1%num2 == 0 ? num2 : GCD3(num2, num1%num2);
}
