#include <stdio.h>

int main()
{
	int age;
	printf("당신의 나이를 입력하세요 : ");
	scanf_s("%d", &age);
	printf("당신의 나이는 다음과 같습니다: %d\n", age);

	char name[20];
	printf("당신의 이름을 입력하세요 : ");
	scanf_s("%s", name, sizeof(name));
	printf("당신의 이름은 다음과 같습니다 : %s\n", name);

	return 0;
}