/* 
	�Լ�: �Է°� ����� ���� �Լ� - �Լ��ȿ��� ����� ��Ÿ����.
*/
//#include <stdio.h>
//
//void func(void) {			// �Լ� ���� : �Լ��� ����� ���⿡ �ۼ��Ѵ�.
//	int a = 10, b = 20;
//
//	printf("void func()\n");
//	printf("a + b : %d\n", a + b);
//}
//
//int main()
//{
//	func();		// �Լ� ȣ��
//	return 0;
//}

/*
	�Լ�: �Է��� �ִ� �Լ�
*/

//#include <stdio.h>
//
//void func(int a, int b) {		// �Ű�����
//	printf("void func(int, int)\n");
//	printf("a + b: %d", a + b);
//}
//
//int main()
//{
//	func(10, 20);		// ���μ�
//	return 0;
//}

/*
	�Լ�: �Է°� ����� �ִ� �Լ�
*/
//#include <stdio.h>
//
//int func(int a, int b) {
//	int res = a + b;
//	return res;
//}
//
//int main()
//{
//	int result = func(10, 20);
//	printf("ȣ�� �� ���ϵ� ��: %d", result);
//
//	return 0;
//}

/*
	�Լ� ����
	�Լ� ����, �Լ� ȣ��, �Լ� ����
*/
//#include <stdio.h>
//
//int func(int, int);			// �Լ����� or �Լ�����
//
//int main()
//{
//	int result = func(10, 20);
//	printf("ȣ�� �� ���ϵ� ��: %d\n", result);
//
//	return 0;
//}
//
//int func(int a, int b) {
//	int res = a + b;
//	return res;
//}