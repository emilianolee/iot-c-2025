#include <stdio.h>

int plus(int n1, int n2);
int minus(int n1, int n2);
int multiply(int n1, int n2);
double divide(int n1, int n2);

int main()
{
	int n1, n2;
	char tool;
	printf("계산식을 입력하세요.(예: 3 + 8)\n");
	scanf("%d %c %d", &n1, &tool, &n2);

	if (tool == '+') { 
		printf("%d + %d = %d\n", n1, n2, plus(n1, n2)); 
	}
	else if (tool == '-') { 
		printf("%d - %d = %d\n", n1, n2, minus(n1, n2)); 
	}
	else if (tool == '*') { 
		printf("%d * %d = %d\n", n1, n2, multiply(n1, n2)); 
	}
	else if (tool == '/') { 
		printf("%d / %d = %lf\n", n1, n2, divide(n1, n2)); 
	}
	else { 
		printf("잘못입력하셨습니다.\n"); 
	}
}

int plus(int n1, int n2) {
	return n1 + n2;
}
int minus(int n1, int n2) {
	return n1 - n2;
}
int multiply(int n1, int n2) {
	return n1 * n2;
}
double divide(int n1, int n2) {
	return double(n1) / double(n2);
}
