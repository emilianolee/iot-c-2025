///*
//	����
//*/
//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//
//int main()
//{
//	char ch1;
//	char ch2;
//
//	scanf_s(" %c %c", &ch1, &ch2);
//	
//	printf("[%c%c]", ch1, ch2);
//
//	return 0;
//}

///*
//	getchar, putchar - ���� ���� �Լ�
//*/
//#include <stdio.h>
//
//int main()
//{
//	int ch; // 
//
//	ch = getchar();		// �ѹ��ڸ� �о���� �Լ�
//	putchar(ch);		// �ѹ��ڸ� ����ϴ� �Լ�(���� ch\n ��� �Ұ�. ���� �ѹ� �� �������)
//	putchar('\n');		
//
//	printf("�Է°�: %d\n", ch);
//
//	return 0;
//}

/*
	�빮�� �ҹ��� ��ȯ
*/

//#include <stdio.h>
//
//int main()
//{
//	char ch1; 
//	char ch2 = 'C';
//	if ((ch2 >= 'A') && (ch2 <= 'Z')) {
//		ch1 = ch2 + ('a' - 'A');	// 'a' - 'A' ��� 32�� �־ �ȴ�.
//	}
//	printf("�빮��: %c\n", ch2);
//	printf("�ҹ���: %c\n", ch1);
//
//
//	return 0;
//}

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	char ch1;
	char ch2 = 'A';

	printf("��ҹ��� �Է� ���α׷��Դϴ�\n");
	printf("��ȯ �ϰ� ���� ���ĺ��� �ۼ����ּ���.\n");
	scanf("%c", &ch2);
	if ((ch2 >= 'A') && (ch2 <= 'Z')) {
		ch1 = ch2 + ('a' - 'A');
		printf("��ȯ �Ϸ�!\t");
		printf("��ȯ�� : %c", ch1);
	}
	else if ((ch2 >= 'a') && (ch2 <= 'z')) {
		ch1 = ch2 - ('a' - 'A');
		printf("��ȯ �Ϸ�!\t");
		printf("��ȯ�� : %c", ch1);
	}
	else {
		printf("�߸��� ���� �ۼ��ϼ̽��ϴ�. �ٽ� �ۼ����ּ���.");
	}
	return 0;
}