///*
//	void pointer
//*/
//
//#include <stdio.h>
//
//int main()
//{
//	int n = 10;	// 정수형 변수 n 선언 및 초기화
//	double db = 3.14;	// 실수형 변수 db 선언 및 초기화
//
//	/*int pn = &n;
//	double* pdb = &db;*/
//	void* p;	// void 포인터 선언(어떤 자료형의 주소도 저장 가능)
//
//	p = &n;		// void 포인터 p에 정수형 변수 n의 주소 저장
//	printf("*p: %d\n", *(int*)p);	// void 포인터를 int 형으로 캐스팅하여 값 출력
//
//	p = &db;	// void 포인터 p에 실수형 변수 db의 주소 저장
//	printf("*p: %.1lf\n", *(double*)p);		// void 포인터를 double형으로 캐스팅하여 값 출력
//
//	return 0;
//}