/* 
	pointer - 주소
	포인터 변수 - 주소를 저장할 수 있는 변수
	포인터 변수 크기는 항상 4Byte
	선언에 있는 *는 포인트 변수임을 알리는 표시임. 말고 별다른 의미 없음
	그 외는 *는 주소가 가리키는 값을 의미
*/

//#include <stdio.h>

//int main()
//{
//	//int p;		// int 타입의 변수 선언
//	//int *p;		// int타입의 포인터 변수 선언
//	//char *pc;	// char타입의 포인터 변수 선언
//	//double *pd; // double 타입의 포인터 변수 선언
//
//	int num = 100;
//	printf("num의 주소: %u\n", &num);
//	printf("num의 값: %d\n", num);
//	int* p = &num;												// * 아무 의미없는 표시
//	printf("포인터변수 p에 저장된 값(주소): %u\t", p);
//	printf("포인터변수 p가 가리키는 곳의 값: %d\n", *p);		// * 간접참조 연산자
//	num += 1;
//	printf("num: %d, *p: %d\n", num, *p);						// 선언 부분이 아닌 곳에 있는 *은 주소가 가리키는 값을 의미
//	*p += 1;
//	printf("num: %d, *p: %d\n", num, *p);
//
//	return 0;
//}

/*
	pointer - 주소의 크기는 컴퓨터 환경에 따라 다르다.
			- 포인터 변수의 크기는 타입에 상관없이 일정하다. Cuz 주소의 크기는 일정하기 때문.
*/
//#include <stdio.h>
//
//int main()
//{
//	char ch;
//	int n;
//	char* pch = &ch;
//	int* pn = &n;
//	printf("char 주소 크기: %d\t", sizeof(&ch));		// 주소크기는 8byte 이기에 포인터 크기도 8byte다.
//	printf("int 주소 크기: %d\n", sizeof(&n));
//	printf("char 포인터 크기: %d\t", sizeof(pch));
//	printf("int 포인터 크기: %d\n", sizeof(pn));
//	
//	return 0;
//}

#include <stdio.h>

int main()
{
	int a = 10;
	int b = 20;
	printf("변경 전 a: %d, b: %d\n", a, b);

	int temp = a;	// 두 값을 바꿔주기 위해 변수 하나 더 선언
	a = b;
	b = temp;

	printf("변경 후 a: %d, b: %d\n", a, b);
	return 0;
}