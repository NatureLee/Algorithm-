#include <stdio.h>
#include <iostream>
#include <stdlib.h>
using namespace std;

/*
   �����Ҵ���� �޸� �ʱ�ȭ ��Ű�� ����
   ���ڿ� �迭�� �������� NULL���� ������ ���ϴ� ũ�� +1 �������
*/

char* subString(char* str, int start, int count)
{
	char* retStr = (char*)malloc(sizeof(char)*(count + 1));  //�迭ũ�� +1
	memset(retStr, 0, count + 1);     //�ʱ�ȭ
	for (int i = 0; i < count; i++)
	{
		retStr[i] = str[start++];
	}
	return retStr;
}