///*
//	void pointer
//*/
//
//#include <stdio.h>
//
//int main()
//{
//	int n = 10;	// ������ ���� n ���� �� �ʱ�ȭ
//	double db = 3.14;	// �Ǽ��� ���� db ���� �� �ʱ�ȭ
//
//	/*int pn = &n;
//	double* pdb = &db;*/
//	void* p;	// void ������ ����(� �ڷ����� �ּҵ� ���� ����)
//
//	p = &n;		// void ������ p�� ������ ���� n�� �ּ� ����
//	printf("*p: %d\n", *(int*)p);	// void �����͸� int ������ ĳ�����Ͽ� �� ���
//
//	p = &db;	// void ������ p�� �Ǽ��� ���� db�� �ּ� ����
//	printf("*p: %.1lf\n", *(double*)p);		// void �����͸� double������ ĳ�����Ͽ� �� ���
//
//	return 0;
//}