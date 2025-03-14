/*
	strcpy - 문자열 복사 함수
*/
//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//#include <string.h>
//
//int main()
//{
//	char str[100] = "orange";
//	char str2[100] = "apple";
//	char* ps = "apple";
//
//	printf("str: %s\n", str);
//	printf("str2: %s\n", str2);
//
//	strcpy(str, str2);			// strcpy(복사, 원본) -> str(복사)이 str2(원본)의 값으로 바뀜
//
//	printf("str: %s\n", str);
//	printf("str2: %s\n", str2);
//
//	strcpy(str, "banana");
//	printf("str: %s", str);
//
//	strcpy(str, ps);
//	printf("str: %s\n", str);
//
//	//strcpy(ps, str2);			// 이 두줄은 불가!	
//	//printf("ps: %s\n", ps);
//
//	strncpy(str, "abcd", 3);	// 시작주소부터 복사할 문자갯수를 설정할 수 있다.
//	printf("%s\n", str);
//	
//	return 0;
//}

//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//
//void myStrcpy();
//
//int main()
//{
//	char str[100] = "orange";
//	
//
//	printf("%s\n", str);
//
//	return 0;
//}
//
//void myStrcpy()
//{
//	char a[100] = "orange";
//	char b[100] = "apple";
//	printf("복사할 글자를 입력하세요 > ");
//	scanf("%d", b);
//	strcpy(a, b);
//}