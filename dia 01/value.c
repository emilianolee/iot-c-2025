///* ���� ���� */
//#include <stdio.h>
//
//int main()
//{
//	int num;		// �ڷ��� ������
//	num = 10;
//	int num2 = 10;	// ������ �ʱ�ȭ
//	num = num2;
//	//100 = num;
//	char ch = 'A';			// ����Ÿ���� ��������
//	double db = 3.14;
//
//	printf("num�� ��: %d\n", num);
//	printf("num2�� ��: %d\n", num2);
//	printf("char�� �� : %d\n", ch);
//	return 0;
//}

//#include <stdio.h>
//
//int main()
//{
//	signed char ch = 0;  // -128 ~ -127
//	unsigned char ch2 = 0;	// 0~255
//
//	unsigned int num;
//	num = 123456;
//	printf("num: %d\n", num);
//	num = -1;
//	printf("num: %d\n", num);
//	printf("num: %u\n", num);
//
//	return 0;
//}

///* �Ǽ� �ڷ��� */
//#include <stdio.h>
//
//int main()
//{
//	float f = 1.12345678912345;
//	double d = 1.12345678912345;
//	
//	printf("float: %.15f\n", f);
//	printf("double: %.15lf\n", d);
//
//	return 0;
//}

/* �迭
	������ �ڷ����� ���������� ������ �� �ִ� ����
*/

//#include <stdio.h>
//
//int main()
//{
//	char str[10] = "banana";		// ����Ÿ�� �迭����
//
//	printf("str: %s\n", str);
//	printf("str[0]: %c\n", str[0]);
//	printf("str[1]: %c\n", str[1]);
//	printf("str[5]: %c\n", str[5]);
//	printf("str[6]: %c\n", str[6]);
//	//printf("str[6]: %s\n", str[6]);		// ���ڿ� ������ �ι��ڰ� �´�.
//
//	char str2[6] = "apple";
//	printf("str2: %s\n", str2);
//	str2[0] = 'A';
//	printf("str2: %s\n", str2);
//
//	//str = str2;
//
//
//	return 0;
//}

//#include <stdio.h>
//
//int main()
//{
//	int ary[5] = { 1, 2, 3, 4, 5 };		// ������ �迭 ����
//	
//	printf("ary[0]: %d\n", ary[0]);
//	ary[3] = 400;
//	printf("ary[3]: %d\n", ary[3]);
//
//	for (int i = 0; i < 5; i++) {
//		printf("ary[%d]: %d\n", i, ary[i]);
//	}
//
//	return 0;
//}

///* ��� */
//#include <stdio.h>
//
//int main()
//{
//	int r = 10;
//	const double pi = 3.14;		// const�� ���� �ٲٴ� �� ������� ����(���� �̸��� ���ȭ)
//	double cf = 2 * pi * r;
//
//	//pi = 3.16
//	double* dp = &pi;			// ���� �̸� ��� ����Ʈ�δ� �ٲ� �� ����
//	*dp = 4.0;
//
//	printf("���ѷ�: %.2lf\n", cf);
//	printf("pi: %.2lf\n", pi);
//
//	return 0;
//}