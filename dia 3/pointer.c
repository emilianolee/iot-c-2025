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

///*
//	�� ���� �ٲٴ� �˰���
//*/
//#include <stdio.h>
//
//int main()
//{
//	int a = 10;
//	int b = 20;
//	printf("���� �� a: %d, b: %d\n", a, b);
//
//	int temp = a;	// �� ���� �ٲ��ֱ� ���� ���� �ϳ� �� ����
//	a = b;
//	b = temp;
//
//	printf("���� �� a: %d, b: %d\n", a, b);
//	return 0;
//}

/* ���� �� */
//#include <stdio.h>
//
//void swap(int, int);
//
//int main()
//{
//	int a = 10;
//	int b = 20;
//
//	printf("ȣ�� �� a: %d, b: %d\n", a, b);
//		
//	swap(a, b);
//
//	printf("ȣ�� �� a: %d, b: %d\n", a, b);
//
//	return 0;
//}
//
//void swap(int aa, int ab) 
//{
//	int temp = aa;		// temp 10
//	aa = ab;				// a = 20
//	ab = temp;			// b = 10
//}

///* ���� �� */
//#include <stdio.h>
//
//void swap(int*, int*);
//
//int main()
//{
//	int a = 10;
//	int b = 20;
//
//	printf("ȣ�� �� a: %d, b: %d\n", a, b);
//		
//	swap(&a, &b);			// &�� �ּҿ�����
//
//	printf("ȣ�� �� a: %d, b: %d\n", a, b);
//
//	return 0;
//}
//
//void swap(int *pa, int *pb)			// �������� �������� *�� �ʼ������� �ʿ� 
//{
//	int temp = *pa;		// temp 10
//	*pa = *pb;				// a = 20
//	*pb = temp;			// b = 10
//}

/*
	�迭�� ������
*/
//#include <stdio.h>
//
//int main()
//{
//	int ary[5];
//	int* pa = ary;
//
//	*(pa + 0) = 10;
//	printf("*pa: %d, ary[0]: %d\n", *pa, ary[0]);
//	printf("pa: %d\n", (pa + 0));
//	printf("pa + 1: %d\n", (pa + 1));
//
//	*(pa + 1) = 20;
//	printf("*pa + 1: %d, ary[1]: %d\n", *(pa + 1), ary[1]);
//	printf("pa[1]: %d\n", pa[1]);			// [ ] == *( ) : �����Ϳ����
//
//	return 0;
//}


//#include <stdio.h>
//
//void printAry(int *, int);
//void inputAry(int*, int);
//
//int main()
//{
//	int ary[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
//	int ary2[] = { 1, 2, 3 };
//	
//	int size = sizeof(ary2) / sizeof(ary2[0]);
//	
//	inputAry(ary, size);
//
//	printAry(ary, size);
//
//	
//	return 0;
//}
//
//void printAry(int *p, int _size)
//{
//	int i;
//	for (i = 0; i < _size; i++) {
//		printf("ary[%d]: %d\n", i, p[i]);
//	}
//}
//
//void inputAry(int* p2, int _size2)
//{
//	int i;
//	for (i = 0; i < _size2; i++) {
//		printf("���ϴ� ���� �Է��Ͻÿ�");
//	
//		scanf_s("%d", &p2[i]);
//		//scanf_s("%d", p2 + i);
//	}
//}

/*
	const
*/

//#include <stdio.h>
//
//int main()
//{
//	const int num = 10;
//	// num = 20; const������ ���� �Ұ�
//
//	int num2 = 10;
//	num2 = 20;
//	int* pnum2 = &num2;
//	*pnum2 = 30;
//	printf("%d\n", num2);
//
//	const int* pn2 = &num2;	// Ÿ�� �տ� const�� �پ��� �� : ������ ���(����Ʈ ������ ���� �������� ���� x)
//	//*pn2 = 100; const������ ���� ���� �Ұ�
//	num2 = 0;
//	pn2 = &num2;
//
//	int num3 = 40;
//	int* const pnum3 = &num3;	// ������ ���� �̸� �տ� const�� �پ��� �� : ������ ���(������ ������ ����Ű�� �ּ� ���� x)
//	*pnum3 = 100;
//	printf("%d\n", num3);
//	//pnum3 = &num2;
//
//	const int* const pn5 = &num2;	// const�� Ÿ�� ��, ������ ���� �̸� �տ� �� �پ��� �� : ������, �ּ� �� �� ���� x
//	//*pn5 = 100;
//	//pn5 = &num3;
//
//	return 0;
//}