///*
//
//*/
//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//
//typedef struct vision
//{
//	double left;
//	double right;
//
//} Vision;
//
//// �Լ� ���� ����
//Vision exchange(Vision);
//
//int main()
//{
//	Vision rot;
//
//	printf("���� �÷� �Է� (���� ������) > ");	// ���� �÷� �Է� �ޱ�
//	scanf("%lf %lf", &rot.left, &rot.right);
//
//	rot = exchange(rot);	// ����ڰ� ���ο� �÷� �Է�
//	
//	printf("�ٲ� �÷�: %.1lf, %.1lf\n", rot.left, rot.right);	// ����� �÷� ���
//
//	return 0;
//}
//
//Vision exchange(Vision vision) // ����ڰ� ���ο� �÷��� �Է��ϵ��� �ϴ� �Լ�
//{
//	printf("���ο� �÷� �Է� (���� ������) > ");
//	scanf("%lf %lf", &vision.left, &vision.right);
//
//	return vision;
//}