#include <stdio.h>

float func() {
	printf("���� ���α׷��Դϴ�.\n");

	int n1, n2;
	char tool;
	printf("������ �Է��ϼ���.(��: 3 + 8)\n");
	scanf("%d %c %d", &n1, &tool, &n2);
	
	if (tool == '+') { printf("%d", n1 + n2); }
	else if (tool == '-') { printf("%d", n1 - n2); }
	else if (tool == '*') { printf("%d", n1 * n2); }
	else if (tool == '/') { printf("%.2lf", n1 / n2); }
	else { printf("�߸��Է��ϼ̽��ϴ�."); }
}

int main()
{
	func();
	return 0;
}