/*
	strcmp - 문자열 비교 함수
*/
#include <stdio.h>

int main()
{
	char str[100] = "apple";
	char str2[100] = "orange";

	/* 
		str이 사전에서 먼저 나오면 -1 반환, 
		str2가 먼저 나오면 1 반환, 
	    같으면 0을 반환  
	*/
	
	if (strcmp(str, str2) > 0)
		printf("%s\n", str);
	else
		printf("%s\n", str2);

	strncmp(str, str2, 3); //시작부터 지정된 숫자갯수 만큼 비교함

	return 0;
}