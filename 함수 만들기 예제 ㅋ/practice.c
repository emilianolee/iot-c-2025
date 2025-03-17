//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//
//void res(int);
//
//int main()
//{
//	int n;
//	printf("홀짝 맞추기 게임입니다.\n");
//	printf("숫자를 입력하세요 > ");
//	scanf("%d", &n);
//
//	res(n);
//
//	return 0;
//}
//
//void res(int n) {
//	if (n % 2 == 0) { printf("짝수 입니다."); }
//	else if (n % 2 == 1) { printf("홀수 입니다."); }
//	else { printf("Error"); }
//}
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
void res(int);

int main()
{
	int n;
	printf("몇개의 별을 출력하시고 싶으신가요? > ");
	scanf("%d", &n);

	res(n);

	return 0;
}

void res(int n) {
	for (int i = 1; i <= n; i++) {
		for (int j = 1; j <= i; j++) {
			printf("*");
		}
		printf("\n");
	}
}

