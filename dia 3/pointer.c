/* 
	pointer - �ּ�
	������ ���� - �ּҸ� ������ �� �ִ� ����
	������ ���� ũ��� �׻� 4Byte
	���� �ִ� *�� ����Ʈ �������� �˸��� ǥ����. ���� ���ٸ� �ǹ� ����
	�� �ܴ� *�� �ּҰ� ����Ű�� ���� �ǹ�
*/

//#include <stdio.h>

//int main()
//{
//	//int p;		// int Ÿ���� ���� ����
//	//int *p;		// intŸ���� ������ ���� ����
//	//char *pc;	// charŸ���� ������ ���� ����
//	//double *pd; // double Ÿ���� ������ ���� ����
//
//	int num = 100;
//	printf("num�� �ּ�: %u\n", &num);
//	printf("num�� ��: %d\n", num);
//	int* p = &num;												// * �ƹ� �ǹ̾��� ǥ��
//	printf("�����ͺ��� p�� ����� ��(�ּ�): %u\t", p);
//	printf("�����ͺ��� p�� ����Ű�� ���� ��: %d\n", *p);		// * �������� ������
//	num += 1;
//	printf("num: %d, *p: %d\n", num, *p);						// ���� �κ��� �ƴ� ���� �ִ� *�� �ּҰ� ����Ű�� ���� �ǹ�
//	*p += 1;
//	printf("num: %d, *p: %d\n", num, *p);
//
//	return 0;
//}

/*
	pointer - �ּ��� ũ��� ��ǻ�� ȯ�濡 ���� �ٸ���.
			- ������ ������ ũ��� Ÿ�Կ� ������� �����ϴ�. Cuz �ּ��� ũ��� �����ϱ� ����.
*/
//#include <stdio.h>
//
//int main()
//{
//	char ch;
//	int n;
//	char* pch = &ch;
//	int* pn = &n;
//	printf("char �ּ� ũ��: %d\t", sizeof(&ch));		// �ּ�ũ��� 8byte �̱⿡ ������ ũ�⵵ 8byte��.
//	printf("int �ּ� ũ��: %d\n", sizeof(&n));
//	printf("char ������ ũ��: %d\t", sizeof(pch));
//	printf("int ������ ũ��: %d\n", sizeof(pn));
//	
//	return 0;
//}

#include <stdio.h>

int main()
{
	int a = 10;
	int b = 20;
	printf("���� �� a: %d, b: %d\n", a, b);

	int temp = a;	// �� ���� �ٲ��ֱ� ���� ���� �ϳ� �� ����
	a = b;
	b = temp;

	printf("���� �� a: %d, b: %d\n", a, b);
	return 0;
}