//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//
//void res(int);		// 함수 선언
//
//int main()
//{
//	int n;		// 정수를 지정할 변수 선언
//	printf("홀짝 맞추기 게임입니다.\n");	
//	printf("숫자를 입력하세요 > ");		// 사용자에게 숫자 입력 요청
//	scanf("%d", &n);			// 사용자로부터 정수를 입력받음
//
//	res(n);			// 입력받은 n을 인자로 하여 res 함수 호출
//
//	return 0;
//}
//
//// res 함수 정의: 입력된 숫자가 홀수인지 짝수인지 판별하여 출력
//void res(int n) {
//	if (n % 2 == 0) { printf("짝수 입니다."); }
//	else if (n % 2 == 1) { printf("홀수 입니다."); }
//	else { printf("Error"); }		// 이론적으로 발생할 수 없는 경우 
//}

//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//void res(int);		// 함수 선언
//
//int main()
//{
//	int n;			// 정수를 지정할 변수 선언
//	printf("몇개의 별을 출력하시고 싶으신가요? > ");		// 사용자에게 입력 요청
//	scanf("%d", &n);		// 사용자로부터 정수를 입력받음
//
//	res(n);		// 입력받은 n을 인자로 하여 res 함수 호출
//
//	return 0;	// 프로그램 종료
//}
//
//// res 함수 정의: 계단형 별(*) 출력
//void res(int n) {
//	for (int i = 1; i <= n; i++) {		// 1부터 n까지 반복(줄 수를 결정)
//		for (int j = 1; j <= i; j++) {	// 현재 줄 수만큼 * 출력
//			printf("*");
//		}
//		printf("\n");		// 한줄 출력 후 줄 바꿈
//	}
//}
//
