/* 
	함수: 입력과 출력이 없는 함수 - 함수안에서 결과를 나타낸다.
*/
//#include <stdio.h>
//
//void func(void) {			// 함수 정의 : 함수의 기능을 여기에 작성한다.
//	int a = 10, b = 20;
//
//	printf("void func()\n");
//	printf("a + b : %d\n", a + b);
//}
//
//int main()
//{
//	func();		// 함수 호출
//	return 0;
//}

/*
	함수: 입력이 있는 함수
*/

//#include <stdio.h>
//
//void func(int a, int b) {		// 매개변수
//	printf("void func(int, int)\n");
//	printf("a + b: %d", a + b);
//}
//
//int main()
//{
//	func(10, 20);		// 실인수
//	return 0;
//}

/*
	함수: 입력과 출력이 있는 함수
*/
//#include <stdio.h>
//
//int func(int a, int b) {
//	int res = a + b;
//	return res;
//}
//
//int main()
//{
//	int result = func(10, 20);
//	printf("호출 후 리턴된 값: %d", result);
//
//	return 0;
//}

/*
	함수 원형
	함수 원형, 함수 호출, 함수 정의
*/
//#include <stdio.h>
//
//int func(int, int);			// 함수선언 or 함수원형
//
//int main()
//{
//	int result = func(10, 20);
//	printf("호출 후 리턴된 값: %d\n", result);
//
//	return 0;
//}
//
//int func(int a, int b) {
//	int res = a + b;
//	return res;
//}