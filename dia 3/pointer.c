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

///*
//	두 값을 바꾸는 알고리즘
//*/
//#include <stdio.h>
//
//int main()
//{
//	int a = 10;
//	int b = 20;
//	printf("변경 전 a: %d, b: %d\n", a, b);
//
//	int temp = a;	// 두 값을 바꿔주기 위해 변수 하나 더 선언
//	a = b;
//	b = temp;
//
//	printf("변경 후 a: %d, b: %d\n", a, b);
//	return 0;
//}

/* 수정 전 */
//#include <stdio.h>
//
//void swap(int, int);
//
//int main()
//{
//	int a = 10;
//	int b = 20;
//
//	printf("호출 전 a: %d, b: %d\n", a, b);
//		
//	swap(a, b);
//
//	printf("호출 후 a: %d, b: %d\n", a, b);
//
//	return 0;
//}
//
//void swap(int aa, int ab) 
//{
//	int temp = aa;		// temp 10
//	aa = ab;				// a = 20
//	ab = temp;			// b = 10
//}

///* 수정 후 */
//#include <stdio.h>
//
//void swap(int*, int*);
//
//int main()
//{
//	int a = 10;
//	int b = 20;
//
//	printf("호출 전 a: %d, b: %d\n", a, b);
//		
//	swap(&a, &b);			// &는 주소연산자
//
//	printf("호출 후 a: %d, b: %d\n", a, b);
//
//	return 0;
//}
//
//void swap(int *pa, int *pb)			// 간접참조 연산자인 *가 필수적으로 필요 
//{
//	int temp = *pa;		// temp 10
//	*pa = *pb;				// a = 20
//	*pb = temp;			// b = 10
//}

/*
	배열과 포인터
*/
//#include <stdio.h>
//
//int main()
//{
//	int ary[5];
//	int* pa = ary;
//
//	*(pa + 0) = 10;
//	printf("*pa: %d, ary[0]: %d\n", *pa, ary[0]);
//	printf("pa: %d\n", (pa + 0));
//	printf("pa + 1: %d\n", (pa + 1));
//
//	*(pa + 1) = 20;
//	printf("*pa + 1: %d, ary[1]: %d\n", *(pa + 1), ary[1]);
//	printf("pa[1]: %d\n", pa[1]);			// [ ] == *( ) : 포인터연산식
//
//	return 0;
//}


//#include <stdio.h>
//
//void printAry(int *, int);
//void inputAry(int*, int);
//
//int main()
//{
//	int ary[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
//	int ary2[] = { 1, 2, 3 };
//	
//	int size = sizeof(ary2) / sizeof(ary2[0]);
//	
//	inputAry(ary, size);
//
//	printAry(ary, size);
//
//	
//	return 0;
//}
//
//void printAry(int *p, int _size)
//{
//	int i;
//	for (i = 0; i < _size; i++) {
//		printf("ary[%d]: %d\n", i, p[i]);
//	}
//}
//
//void inputAry(int* p2, int _size2)
//{
//	int i;
//	for (i = 0; i < _size2; i++) {
//		printf("원하는 값을 입력하시오");
//	
//		scanf_s("%d", &p2[i]);
//		//scanf_s("%d", p2 + i);
//	}
//}

/*
	const
*/

//#include <stdio.h>
//
//int main()
//{
//	const int num = 10;
//	// num = 20; const때문에 변경 불가
//
//	int num2 = 10;
//	num2 = 20;
//	int* pnum2 = &num2;
//	*pnum2 = 30;
//	printf("%d\n", num2);
//
//	const int* pn2 = &num2;	// 타입 앞에 const가 붙었을 시 : 데이터 상수(포인트 변수를 통한 데이터의 변경 x)
//	//*pn2 = 100; const때문에 간접 참조 불가
//	num2 = 0;
//	pn2 = &num2;
//
//	int num3 = 40;
//	int* const pnum3 = &num3;	// 포인터 변수 이름 앞에 const가 붙었을 시 : 포인터 상수(포인터 변수가 가리키는 주소 변경 x)
//	*pnum3 = 100;
//	printf("%d\n", num3);
//	//pnum3 = &num2;
//
//	const int* const pn5 = &num2;	// const를 타입 앞, 포인터 변수 이름 앞에 다 붙었을 시 : 데이터, 주소 둘 다 변경 x
//	//*pn5 = 100;
//	//pn5 = &num3;
//
//	return 0;
//}