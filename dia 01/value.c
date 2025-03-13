///* 변수 선언 */
//#include <stdio.h>
//
//int main()
//{
//	int num;		// 자료형 변수명
//	num = 10;
//	int num2 = 10;	// 변수의 초기화
//	num = num2;
//	//100 = num;
//	char ch = 'A';			// 문자타입의 변수선언
//	double db = 3.14;
//
//	printf("num의 값: %d\n", num);
//	printf("num2의 값: %d\n", num2);
//	printf("char의 값 : %d\n", ch);
//	return 0;
//}

//#include <stdio.h>
//
//int main()
//{
//	signed char ch = 0;  // -128 ~ -127
//	unsigned char ch2 = 0;	// 0~255
//
//	unsigned int num;
//	num = 123456;
//	printf("num: %d\n", num);
//	num = -1;
//	printf("num: %d\n", num);
//	printf("num: %u\n", num);
//
//	return 0;
//}

///* 실수 자료형 */
//#include <stdio.h>
//
//int main()
//{
//	float f = 1.12345678912345;
//	double d = 1.12345678912345;
//	
//	printf("float: %.15f\n", f);
//	printf("double: %.15lf\n", d);
//
//	return 0;
//}

/* 배열
	동일한 자료형을 연속적으로 저장할 수 있는 공간
*/

//#include <stdio.h>
//
//int main()
//{
//	char str[10] = "banana";		// 문자타입 배열선언
//
//	printf("str: %s\n", str);
//	printf("str[0]: %c\n", str[0]);
//	printf("str[1]: %c\n", str[1]);
//	printf("str[5]: %c\n", str[5]);
//	printf("str[6]: %c\n", str[6]);
//	//printf("str[6]: %s\n", str[6]);		// 문자열 끝에는 널문자가 온다.
//
//	char str2[6] = "apple";
//	printf("str2: %s\n", str2);
//	str2[0] = 'A';
//	printf("str2: %s\n", str2);
//
//	//str = str2;
//
//
//	return 0;
//}

//#include <stdio.h>
//
//int main()
//{
//	int ary[5] = { 1, 2, 3, 4, 5 };		// 정수형 배열 선언
//	
//	printf("ary[0]: %d\n", ary[0]);
//	ary[3] = 400;
//	printf("ary[3]: %d\n", ary[3]);
//
//	for (int i = 0; i < 5; i++) {
//		printf("ary[%d]: %d\n", i, ary[i]);
//	}
//
//	return 0;
//}

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