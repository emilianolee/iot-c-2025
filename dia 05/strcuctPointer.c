///*
//	구조체 포인터:
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
//	Score s = { 100, 80, 85 };	// 초기화
//	Score* ps = &s;
//
//	printf("국어: %d\n", ps -> kor);		// (*ps).kor로 바꿔도 가능
//	printf("영어: %d\n", ps -> eng);
//	printf("수학: %d\n", (*ps).math);
//
//	return 0;
//}
//
///*
//	구조체 변수를 통해서 멤버에 접근하는 방법은? 답: .(도트 연산자)
//	구조체 포인터를 통해서 멤버에 접근하는 방법은? 답: ->(화살표 연산자)
//*/