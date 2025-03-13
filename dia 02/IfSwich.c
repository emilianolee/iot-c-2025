///* if 시작*/
//#include <stdio.h>
//
//int main()
//{
//    int ans = 10;
//    int num;
//    printf("숫자 맞추기 게임입니다.\n");
//
//    while (1) {
//        printf("정수를 입력해주세요. : ");
//        scanf_s("%d", &num);
//
//        if (num == ans) {
//            printf("정답입니다~~\n");
//            break;
//        }
//        else if (num > ans) {
//            printf("%d보다 작은 수 입니다.\n", num);
//        }
//        else {
//            printf("%d보다 큰 수 입니다.\n", num);
//        }
//    }
//}

//#include <stdio.h>
//
//int main()
//{
//	int num = 10;
//
//	if (num == 10) {
//		printf("빙고!\n");
//	}
//	else if (1) {
//		printf("빙고아님");
//	}
//	return 0;
//}

///* switch(조건식) ~ case 시작 */
//#include <stdio.h>
//
//int main()
//{
//	int num = 10;
//	int n = 0;
//	switch (num) {
//	case 10:
//		printf("빙고");
//		break;				// 반복문을 벗어난다.
//	case 50:
//		printf("작음");
//		break;
//	case 200:
//		printf("큼");
//		break;
//	default:
//		printf("이것도 저것도 아님");
//		break;
//	}
//
//	return 0;
//}