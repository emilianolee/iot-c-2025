//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//
//void res(int);
//
//int main()
//{
//	int n;
//	printf("Ȧ¦ ���߱� �����Դϴ�.\n");
//	printf("���ڸ� �Է��ϼ��� > ");
//	scanf("%d", &n);
//
//	res(n);
//
//	return 0;
//}
//
//void res(int n) {
//	if (n % 2 == 0) { printf("¦�� �Դϴ�."); }
//	else if (n % 2 == 1) { printf("Ȧ�� �Դϴ�."); }
//	else { printf("Error"); }
//}
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
void res(int);

int main()
{
	int n;
	printf("��� ���� ����Ͻð� �����Ű���? > ");
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

