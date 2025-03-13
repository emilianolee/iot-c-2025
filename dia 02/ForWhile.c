/*
	for 문
*/
//#include <stdio.h>
//
//int main()
//{
//	int i;
//	/* for(초기식: 조건식: 증감식) { } */
//	for (int i = 0; i < 10; i++) {
//		printf("i: %d\n", i);
//	}
//
//	int sum = 0;
//	for (int i = 1; i <= 10; i++) {
//		sum += i;
//	}
//	printf("1 ~ 10까지의 합은 %d 입니다.", sum);
//
//	return 0;
//}

//#include <stdio.h>
//
//int main()
//{
//	int x;
//	int y;
//
//	for (int x = 1; x < 10; x++) {
//		for (int y = 1; y < 10; y++) {
//			printf("%d x %d = %d\n", x, y, x * y);
//		}
//	}
//	return 0;
//}

//#include <stdio.h>
//
//int main()
//{
//	int x;
//	printf("구구단 몇 단을 보여드릴까요?");
//	scanf_s("%d", &x);
//	printf("%d단은 다음과 같습니다\n", x);
//
//	int y;
//	for (int y = 1; y < 10; y++) {
//		printf("%d x %d = %d\n", x, y, x * y);
//	}
//	return 0;
//}

///* while문 시작 */
//#include <stdio.h>
//
// int main()
// {
// 	/*int i = 1;
// 	while (i <= 5) {
// 		printf("안녕하세요. %d\n", i++);
// 	}*/
//
// 	int i = 1;
// 	int sum = 0;
// 	while (i <= 100) {
// 		sum += i;
// 		i++;
// 	}
// 	printf("1~100의 합은 %d입니다.", sum);
// 	return 0;
// }

/* break continue 무한반복 등 */
//#include <stdio.h>
//
//int main()
//{
//	int i = 0;
//	for (i = 1; i <= 10; i = i + 2) {
//		printf("%d\n", i);
//	}
//
//	return 0;
//}

//#include <stdio.h>
//
//int main()
//{
//	int i = 0;
//	for (i = 1; i <= 10; i = i++) {
//		if (i % 2 == 0) continue;		// 건너뛴다
//		//if (i == 7) break;				// 반복문 탈출
//		if (i >= 7) break;				// 21행 보다 22행이 더 좋음. 예외까지 다 처리하기 때문
//		printf("%d\n", i);
//	}
//
//	return 0;
//}

/* 무한 반복 */
// while (1) { 
// 
// }

// for (;;){
// 
// }
