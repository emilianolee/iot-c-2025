///*
//	함수 포인터(함수 이름 자체도 포인터다)
//*/
//
//
//#include <stdio.h>
//
//int sum(int, int);
//int minus(int, int);
//
//int main()
//{
//	int (*fp)(int, int);	// 두 개의 정수를 매개변수로 받고 정수를 반환하는 함수 포인터 선언
//	int res3;		// 함수 포인터를 사용한 결과값을 지정할 변수
//	/*int res;
//	int res2;*/
//	/*
//	// sum과 minus 함수를 직접 호출하여 결과 저장
//	res = sum(20, 10);
//	res2 = minus(20, 10);
//	*/
//	
//	fp = sum;		// 함수 포인터 fp에 sum함수의 주소를 할당
//	res3 = fp(20, 10);		// 함수 포인터를 사용하여 sum함수 호출
//	printf("res3: %d\n", res3);		// 결과 출력
//
//	/*printf("res = %d\n", res);
//	printf("res2 = %d\n", res2);*/
//
//	return 0;	// 프로그램 종료
//}
//
//int sum(int a, int b)	// 두 정수의 합을 반환하는 함수
//{
//	int res = a + b;	// 두 수를 더한 결과를 변수 res에 저장
//	return res;			// 결과 반환
//
//	/*return a + b; 로 써도 동일한 동작을 함*/
//}
//
//int minus(int a, int b)	// 두 정수의 차를 반환하는 함수
//{
//	return a - b;		// 두 수를 뺀 결과 반환
//}


//호출하고자 하는 함수를 입력으로 받아요.
//더하기 빼기 곱하기 나누기....

//#include <stdio.h>
//
//void func(int(*fp)(int, int));
//
//int main()
//{
//	int (*fp)(int, int);
//	int a = 20;
//	int b = 10;
//	char tool;
//
//	printf("다음 네가지 연산자 중 하나를 입력하시오(sum, min, mul, div) > ");
//	fp = scanf("%s", &tool);
//	
//	if (tool == 'sum') {
//		printf("&d + %d = %d", a, b, a+b);
//	}
//	else if (tool == 'min') {
//		printf("&d - %d = %d", a, b, a-b);
//	}
//	else if (tool == 'mul') {
//		printf("&d * %d = %d", a, b, a*b);
//	}
//	else if (tool == 'div') {
//		printf("%d / %d = %d", a, b, a/b);
//	}
//	else {
//		printf("잘못입력하셨습니다.");
//	}
//
//	return 0;
//}
//
//void func(int(*fp)(int, int))
//{
//	int a = 20;
//	int b = 10;
//	char tool;
//}