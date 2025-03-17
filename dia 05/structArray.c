#include <stdio.h>

typedef struct addr
{
	char name[20];
	int age;
	char tel[20];
	char addr[100];
} Addr;

void print_list(Addr list[]);

int main()
{
	Addr list[3] = {
		{ "ȫ�浿", 100, "010-1234-5678", "����" },
		{ "��ö��", 33, "010-1231-2222", "�λ�" },
		{ "�迵��", 24, "010-9999-3456", "���" }
    };

	print_list(list);

	/*for (int i = 0; i < 3; i++) {
		printf("%s, %d, %s, %s\n", list[i].name, list[i].age, list[i].tel, list[i].addr);
	}*/
	return 0;
}

void print_list(Addr list[]) {
	for (int i = 0; i < 3; i++) {
		printf("%s, %d, %s, %s\n", list[i].name, list[i].age, list[i].tel, list[i].addr);
	}
}
