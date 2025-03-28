///* Operate 시작 */
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
//	res = !(n >= 30);			// !는 부정 연산자 
//	printf("res: %d\n", res);
//	
//	res = ~n;					//(0) 0001 1110
//	printf("res: %d\n", res);	//(1) 1110 0001
//	
//	res = n << 1;				// 좌측으로 이동시 LSB는 0으로 채워짐
//	printf("res: %x\n", res);
//	
//	res = res >> 1;				// 우측으로 이동시 부호비트를 따라감
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
//	res = n++;							 // 후위연산자 -> n을 던져주고나서 1을 증가시켜라			
//	printf("res: %d, n++: %d\n", res, n);		
//	res = ++n2;							 // 전위연산자 -> 1을 증가시킨 후에 n을 던져줘라
//	printf("res: %d, n2: %d\n", res, n2);		
//	
//	return 0;
//}

/* Shift 시작 */
//#include <stdio.h>
//
//int main()
//{
//	char ch = 0x7f;			// 0b 0111 1111
//	unsigned char uch = 0x7f;
//	printf("ch: %x, uch: %x, ch: %u, uch: %u\n", ch, uch, ch, uch);
//
//	char ch1 = 0x9f;		// 0b 1001 1111
//	unsigned char uch1 = 0x9f;
//	printf("ch1: %x, uch1: %x\n", ch1, uch1);
//
//	ch1 >>= 1;				// 0b 1100 1111 , 대입 연산자가 먼저 나와야함.
//	uch >>= 1;				// 0b 0100 1111
//	printf("ch1: %x, uch1: %x\n", ch1, uch1);
//
//	ch1 != uch1;
//
//	return 0;
//}