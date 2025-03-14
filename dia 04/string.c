/*
	문자열 - 문자열은 주소다!
*/
//#include <stdio.h>
//
//int main()
//{
//	char str[100] = "orange";
//
//	printf("%s\n", str);
//	printf("%s\n", "orange");
//	printf("%p\n", "orange");
//	printf("%c\n", *"orange");
//	printf("%c\n", *("orange" + 1));
//	printf("%c\n", "orange"[2]);
//
//	//"orange"[0] = 'O';
//	// *"orange" = 'O';
//	printf("%s\n", str);
//
//	return 0;
//}

/*
	<데이터 영역>
	- 힙: 사용자에게 할당된 메모리 영역
	- stack: 지역변수, 매개변수
	- Data: 전역변수, static
	- Rod: 문자열 상수, 리터럴
*/

/*
	문자열 상수는 주소이다.
*/
//#include <stdio.h>
//
//int main()
//{
//	char* ps = "orange";	// 문자열 상수는 주소이기에 char 타입에 포인터를 써서 가리킬 수 있음
//	printf("ps가 가리키는 값: %s\n", ps);
//	ps = "banana";
//	printf("ps가 가리키는 값: %s\n", ps);
//
//	return 0;
//}


/*
	scanf는 gets(공백까지 입력 가능)
	stdin - 표준 입력 버퍼(입력 스트림)
*/
//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//
//int main()
//{
//	char str[100];
//
//	/* scanf */
//	/*printf("문자열 입력 >> ");
//	scanf("%s\n", str);
//
//	printf("문자열: %s\n", str);
//	scanf("%s", str);
//	printf("다음 문자열: %s\n", str);*/
//
//	/* gets */
//	printf("공백을 포함한 입력 >> ");
//	gets(str);
//	printf("입력 문자열: %s\n", str);
//
//	/* fgets */
//	printf("공백을 포함한 입력 >> ");
//	fgets(str, sizeof(str), stdin);
//	printf("입력 문자열: %s\n", str);
//
//	return 0;
//}

/*
	puts, fputs - 전용 출력 함수
	stdout - 표준 출력 버퍼(스트림)
*/
//#include <stdio.h>
//
//int main()
//{
//	char str[100] = "Delmonte orange";
//	char* ps = "banana";
//
//	printf("%s\n", str);
//	puts(str);				// 자동 개행
//	fputs(str, stdout);		// 개행 안됨
//	puts(ps);
//	fputs(ps, stdout);
//
//	return 0;
//}