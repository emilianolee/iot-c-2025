/*
	���ڿ� - ���ڿ��� �ּҴ�!
*/
//#include <stdio.h>
//
//int main()
//{
//	char str[100] = "orange";
//
//	printf("%s\n", str);
//	printf("%s\n", "orange");
//	printf("%p\n", "orange");
//	printf("%c\n", *"orange");
//	printf("%c\n", *("orange" + 1));
//	printf("%c\n", "orange"[2]);
//
//	//"orange"[0] = 'O';
//	// *"orange" = 'O';
//	printf("%s\n", str);
//
//	return 0;
//}

/*
	<������ ����>
	- ��: ����ڿ��� �Ҵ�� �޸� ����
	- stack: ��������, �Ű�����
	- Data: ��������, static
	- Rod: ���ڿ� ���, ���ͷ�
*/

/*
	���ڿ� ����� �ּ��̴�.
*/
//#include <stdio.h>
//
//int main()
//{
//	char* ps = "orange";	// ���ڿ� ����� �ּ��̱⿡ char Ÿ�Կ� �����͸� �Ἥ ����ų �� ����
//	printf("ps�� ����Ű�� ��: %s\n", ps);
//	ps = "banana";
//	printf("ps�� ����Ű�� ��: %s\n", ps);
//
//	return 0;
//}


/*
	scanf�� gets(������� �Է� ����)
	stdin - ǥ�� �Է� ����(�Է� ��Ʈ��)
*/
//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//
//int main()
//{
//	char str[100];
//
//	/* scanf */
//	/*printf("���ڿ� �Է� >> ");
//	scanf("%s\n", str);
//
//	printf("���ڿ�: %s\n", str);
//	scanf("%s", str);
//	printf("���� ���ڿ�: %s\n", str);*/
//
//	/* gets */
//	printf("������ ������ �Է� >> ");
//	gets(str);
//	printf("�Է� ���ڿ�: %s\n", str);
//
//	/* fgets */
//	printf("������ ������ �Է� >> ");
//	fgets(str, sizeof(str), stdin);
//	printf("�Է� ���ڿ�: %s\n", str);
//
//	return 0;
//}

/*
	puts, fputs - ���� ��� �Լ�
	stdout - ǥ�� ��� ����(��Ʈ��)
*/
//#include <stdio.h>
//
//int main()
//{
//	char str[100] = "Delmonte orange";
//	char* ps = "banana";
//
//	printf("%s\n", str);
//	puts(str);				// �ڵ� ����
//	fputs(str, stdout);		// ���� �ȵ�
//	puts(ps);
//	fputs(ps, stdout);
//
//	return 0;
//}