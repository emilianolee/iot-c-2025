///*
//	�Լ� ������(�Լ� �̸� ��ü�� �����ʹ�)
//*/
//
//
//#include <stdio.h>
//
//int sum(int, int);
//int minus(int, int);
//
//int main()
//{
//	int (*fp)(int, int);	// �� ���� ������ �Ű������� �ް� ������ ��ȯ�ϴ� �Լ� ������ ����
//	int res3;		// �Լ� �����͸� ����� ������� ������ ����
//	/*int res;
//	int res2;*/
//	/*
//	// sum�� minus �Լ��� ���� ȣ���Ͽ� ��� ����
//	res = sum(20, 10);
//	res2 = minus(20, 10);
//	*/
//	
//	fp = sum;		// �Լ� ������ fp�� sum�Լ��� �ּҸ� �Ҵ�
//	res3 = fp(20, 10);		// �Լ� �����͸� ����Ͽ� sum�Լ� ȣ��
//	printf("res3: %d\n", res3);		// ��� ���
//
//	/*printf("res = %d\n", res);
//	printf("res2 = %d\n", res2);*/
//
//	return 0;	// ���α׷� ����
//}
//
//int sum(int a, int b)	// �� ������ ���� ��ȯ�ϴ� �Լ�
//{
//	int res = a + b;	// �� ���� ���� ����� ���� res�� ����
//	return res;			// ��� ��ȯ
//
//	/*return a + b; �� �ᵵ ������ ������ ��*/
//}
//
//int minus(int a, int b)	// �� ������ ���� ��ȯ�ϴ� �Լ�
//{
//	return a - b;		// �� ���� �� ��� ��ȯ
//}


//ȣ���ϰ��� �ϴ� �Լ��� �Է����� �޾ƿ�.
//���ϱ� ���� ���ϱ� ������....

//#include <stdio.h>
//
//void func(int(*fp)(int, int));
//
//int main()
//{
//	int (*fp)(int, int);
//	int a = 20;
//	int b = 10;
//	char tool;
//
//	printf("���� �װ��� ������ �� �ϳ��� �Է��Ͻÿ�(sum, min, mul, div) > ");
//	fp = scanf("%s", &tool);
//	
//	if (tool == 'sum') {
//		printf("&d + %d = %d", a, b, a+b);
//	}
//	else if (tool == 'min') {
//		printf("&d - %d = %d", a, b, a-b);
//	}
//	else if (tool == 'mul') {
//		printf("&d * %d = %d", a, b, a*b);
//	}
//	else if (tool == 'div') {
//		printf("%d / %d = %d", a, b, a/b);
//	}
//	else {
//		printf("�߸��Է��ϼ̽��ϴ�.");
//	}
//
//	return 0;
//}
//
//void func(int(*fp)(int, int))
//{
//	int a = 20;
//	int b = 10;
//	char tool;
//}