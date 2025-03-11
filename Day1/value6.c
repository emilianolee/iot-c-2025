///* 상수 */
//#include <stdio.h>
//
//int main()
//{
//	int r = 10;
//	const double pi = 3.14;		// const는 값을 바꾸는 걸 허락하지 않음(변수 이름을 상수화)
//	double cf = 2 * pi * r;
//
//	//pi = 3.16
//	double* dp = &pi;			// 변수 이름 대신 포인트로는 바꿀 수 있음
//	*dp = 4.0;
//
//	printf("원둘레: %.2lf\n", cf);
//	printf("pi: %.2lf\n", pi);
//
//	return 0;
//}