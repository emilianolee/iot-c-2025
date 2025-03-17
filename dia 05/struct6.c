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
//// 함수 원형 선언
//Vision exchange(Vision);
//
//int main()
//{
//	Vision rot;
//
//	printf("현재 시력 입력 (왼쪽 오른쪽) > ");	// 기존 시력 입력 받기
//	scanf("%lf %lf", &rot.left, &rot.right);
//
//	rot = exchange(rot);	// 사용자가 새로운 시력 입력
//	
//	printf("바뀐 시력: %.1lf, %.1lf\n", rot.left, rot.right);	// 변경된 시력 출력
//
//	return 0;
//}
//
//Vision exchange(Vision vision) // 사용자가 새로운 시력을 입력하도록 하는 함수
//{
//	printf("새로운 시력 입력 (왼쪽 오른쪽) > ");
//	scanf("%lf %lf", &vision.left, &vision.right);
//
//	return vision;
//}