#include <stdio.h>

float func() {
	printf("계산기 프로그램입니다.\n");

	int n1, n2;
	char tool;
	printf("계산식을 입력하세요.(예: 3 + 8)\n");
	scanf("%d %c %d", &n1, &tool, &n2);
	
	if (tool == '+') { printf("%d", n1 + n2); }
	else if (tool == '-') { printf("%d", n1 - n2); }
	else if (tool == '*') { printf("%d", n1 * n2); }
	else if (tool == '/') { printf("%.2lf", n1 / n2); }
	else { printf("잘못입력하셨습니다."); }
}

int main()
{
	func();
	return 0;
}