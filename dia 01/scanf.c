///*
//	입력 - scanf()
//*/
//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//
//int main()
//{
//	//int inputVal;
//	//printf("정수를 입력하세요: ");	// scanf에는 별도의 문자를 작성할 수 없기에 printf로 미리 작성해줘야함
//	//scanf("%d", &inputVal);		// scanf 사용시 &주소연산자 사용해야함
//
//	//printf("입력한 정수는 %d 입니다.", inputVal);
//
//	int n1, n2;
//	printf("두개의 정수를 입력하세요\n");
//	scanf_s("%d %d", &n1, &n2);
//
//	printf("입력한 두 정수는 %d, %d 입니다.\n", n1, n2);
//
//	return 0;
//}

//#include <stdio.h>
//int main()
//{
//	char str[20];
//	printf("문자열을 입력하세요 : ");
//	scanf_s("%s", str, sizeof(str));
//	printf("당신의 이름은 다음과 같습니다 : %s\n", str);
//
//
//	/*printf("char 크기: %d\n", sizeof(char));
//	printf("정수 크기: %d\n", sizeof(int));
//	printf("float 크기: %d\n", sizeof(float));
//	printf("double 크기: %d\n", sizeof(double));*/
//
//	return 0;
//}

//#include <stdio.h>
//
//int main()
//{
//	int age;
//	char name[20];
//
//	printf("당신의 나이를 입력하시오 > ");
//	scanf_s("%d", &age);
//	printf("당신의 이름을 입력하시오 > ");
//	scanf_s("%s", name, sizeof(name));
//
//	printf("당신의 이름: %s, 당신의 나이: %d", name, age);
//
//	return 0;
//}
//
///*
//A && B - 논리 연산자(두개 다 True일 때 True 값을 반환
//A & B - 비트 연산자(A 와 B의 &값을 반환)
//A || B
//A | B
//*/

//#include <stdio.h>
//
//int main()
//{
//	int age;
//	printf("당신의 나이를 입력하세요 : ");
//	scanf_s("%d", &age);
//	printf("당신의 나이는 다음과 같습니다: %d\n", age);
//
//	char name[20];
//	printf("당신의 이름을 입력하세요 : ");
//	scanf_s("%s", name, sizeof(name));
//	printf("당신의 이름은 다음과 같습니다 : %s\n", name);
//
//	return 0;
//}