///*
//	����ü ������:
//*/
//#include <stdio.h>
//
//typedef struct score
//{
//	int kor;
//	int eng;
//	int math;
//} Score;
//
//int main()
//{
//	Score s = { 100, 80, 85 };	// �ʱ�ȭ
//	Score* ps = &s;
//
//	printf("����: %d\n", ps -> kor);		// (*ps).kor�� �ٲ㵵 ����
//	printf("����: %d\n", ps -> eng);
//	printf("����: %d\n", (*ps).math);
//
//	return 0;
//}
//
///*
//	����ü ������ ���ؼ� ����� �����ϴ� �����? ��: .(��Ʈ ������)
//	����ü �����͸� ���ؼ� ����� �����ϴ� �����? ��: ->(ȭ��ǥ ������)
//*/