///*
//	struct(구조체) - 사용자 정의 자료형
//	기존 자료형을 묶어서 만든 복합 자료형(타입)
//*/
//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//#include <string.h>
//
//struct Human {			// 구조체 선언 -> struct 구조체명 {};
//	char name[100];		// 멤버변수
//	int age;			// 멤버변수
//};
//
//int main()
//{
//	/* .은 멤버 접근연상자 */
//	struct Human h;		// Human 구조체 변수 h 선언
//	h.age = 30;			// h객체의 멤버 age에 30을 저장한다.
//	//h.name = "hong kildong";
//	strcpy(h.name, "Lee Yechan");
//
//	//char str[100] = "Lee Yechan";
//	//printf("%s\n", str);
//	//char str2[100];
//	//str2 = "Kim minjae";
//	/*str2[0] = 'h';
//	str2[1] = 'o';
//	...
//	str2[10] = '\0';*/
//
//	printf("나의 이름은 %s이고 나이는 %d 입니다.", h.name, h.age);
//	return 0;
//}