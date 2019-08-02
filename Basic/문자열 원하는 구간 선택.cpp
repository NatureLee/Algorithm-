#include <stdio.h>
#include <iostream>
#include <stdlib.h>
using namespace std;

/*
   동적할당받은 메모리 초기화 시키고 시작
   문자열 배열은 마지막에 NULL들어가기 때문에 원하는 크기 +1 해줘야함
*/

char* subString(char* str, int start, int count)
{
	char* retStr = (char*)malloc(sizeof(char)*(count + 1));  //배열크기 +1
	memset(retStr, 0, count + 1);     //초기화
	for (int i = 0; i < count; i++)
	{
		retStr[i] = str[start++];
	}
	return retStr;
}