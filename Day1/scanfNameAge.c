#include <stdio.h>

int main()
{
	int age;
	printf("����� ���̸� �Է��ϼ��� : ");
	scanf_s("%d", &age);
	printf("����� ���̴� ������ �����ϴ�: %d\n", age);

	char name[20];
	printf("����� �̸��� �Է��ϼ��� : ");
	scanf_s("%s", name, sizeof(name));
	printf("����� �̸��� ������ �����ϴ� : %s\n", name);

	return 0;
}