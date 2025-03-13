///*
//	문자
//*/
//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//
//int main()
//{
//	char ch1;
//	char ch2;
//
//	scanf_s(" %c %c", &ch1, &ch2);
//	
//	printf("[%c%c]", ch1, ch2);
//
//	return 0;
//}

///*
//	getchar, putchar - 문자 전용 함수
//*/
//#include <stdio.h>
//
//int main()
//{
//	int ch; // 
//
//	ch = getchar();		// 한문자를 읽어오는 함수
//	putchar(ch);		// 한문자를 출력하는 함수(따라서 ch\n 사용 불가. 따로 한번 더 써줘야함)
//	putchar('\n');		
//
//	printf("입력값: %d\n", ch);
//
//	return 0;
//}

/*
	대문자 소문자 변환
*/

//#include <stdio.h>
//
//int main()
//{
//	char ch1; 
//	char ch2 = 'C';
//	if ((ch2 >= 'A') && (ch2 <= 'Z')) {
//		ch1 = ch2 + ('a' - 'A');	// 'a' - 'A' 대신 32를 넣어도 된다.
//	}
//	printf("대문자: %c\n", ch2);
//	printf("소문자: %c\n", ch1);
//
//
//	return 0;
//}

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	char ch1;
	char ch2 = 'A';

	printf("대소문자 입력 프로그램입니다\n");
	printf("변환 하고 싶은 알파벳을 작성해주세요.\n");
	scanf("%c", &ch2);
	if ((ch2 >= 'A') && (ch2 <= 'Z')) {
		ch1 = ch2 + ('a' - 'A');
		printf("변환 완료!\t");
		printf("변환값 : %c", ch1);
	}
	else if ((ch2 >= 'a') && (ch2 <= 'z')) {
		ch1 = ch2 - ('a' - 'A');
		printf("변환 완료!\t");
		printf("변환값 : %c", ch1);
	}
	else {
		printf("잘못된 값을 작성하셨습니다. 다시 작성해주세요.");
	}
	return 0;
}