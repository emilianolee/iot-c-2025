//#include <stdio.h>
//
//int main()
//{
//	int n = 30;
//	int res;
//
//	res = (n > 10) && (n < 20);
//	printf("res: %d\n", res);
//	
//	res = (n > 10) || (n < 20);
//	printf("res: %d\n", res);
//	
//	res = (n >= 30);
//	printf("res: %d\n", res);
//	
//	res = !(n >= 30);			// !�� ���� ������ 
//	printf("res: %d\n", res);
//	
//	res = ~n;					//(0) 0001 1110
//	printf("res: %d\n", res);	//(1) 1110 0001
//	
//	res = n << 1;				// �������� �̵��� LSB�� 0���� ä����
//	printf("res: %x\n", res);
//	
//	res = res >> 1;				// �������� �̵��� ��ȣ��Ʈ�� ����
//	printf("res: %x\n", res);
//
//	int n2 = 143;				// 0b 1000 1111
//	res = n2 << 1;				// 0b 1 0001 1110
//	printf("res: %x\n", res);
//	res = n2 >> 1;				// 0b 1100 0111
//	printf("res: %x\n", res);	
//
//	return 0;
//}

//#include <stdio.h>
//
//int main()
//{
//	int n = 10, n2 = 20;
//	int res;
//
//	res = (n > n2) ? n : n2;
//	printf("res: %d\n", res);
//
//	res = n++;							 // ���������� -> n�� �����ְ��� 1�� �������Ѷ�			
//	printf("res: %d, n++: %d\n", res, n);		
//	res = ++n2;							 // ���������� -> 1�� ������Ų �Ŀ� n�� �������
//	printf("res: %d, n2: %d\n", res, n2);		
//	
//	return 0;
//}