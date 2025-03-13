/* 
	배열 : 동일한 자료를 연속적으로 저장하는 것
	 - 효율적으로 데이터에 접근하여 가공하기 위해 자료구조 알고리즘을 사용. 이것의 출발점이 배열 
	 - 배열이름은 주소다
	 - 배열은 무조건 for 문!!
	 - 장점 : 쉽게 접근해서 배열의 출력을 가져올 수 있다,
	 - 단점 : 수정이 어려움. 
*/
//#include <stdio.h>
//
//int main()
//{
//	int ary[5] = { 1, 2, 3, 4, 5 };		// 정수형 배열 선언(4byte 5개 -> 최소 20byte)
//	int ary2[] = { 6, 7, 8, 9, 10 };	// 이 형태의 배열 선언도 가능(이 경우에는 방 개수 안적어도 가능)
//	int ary3[5];						// 이 형태의 배열 선언도 가능(But 별로 좋지 않음)
//	//int ary4[];						// 이건 불가능 함!
//
//	for (int i = 0; i < 5; i++) {
//		printf("ary[%d]: %d\t", i, ary[i]);
//		printf("ary2[%d]: %d\n", i, ary2[i]);
//	}
//
//	ary[2] = 100;
//	printf("ary[2]: %d", ary[2]);
//
//	return 0;
//}

//#include <stdio.h>
//
//int main()
//{
//	int ary[] = { 1, 2, 3 }; // 배열의 크기 -> int(4Byte) 3개 => 12
//
//	printf("배열의 전체 크기: %d\n", sizeof(ary));
//	printf("배열 방 한개의 크기: %d\n", sizeof(ary[0]));
//	printf("배열 방의 개수: %d\n", sizeof(ary) / sizeof(ary[0]));
//	printf("배열 이름: %p\n", ary);
//	printf("배열의 첫번째 방 주소: %p\n", &ary[0]);		// 배열 이름은 배열의 첫번째 방 주소와 같음
//	printf("배열의 두번째 방 주소: %p\n", ary + 1);	// 배열 두번째 방의 주소 
//	printf("배열의 두번째 방 주소: %p\n", &ary[1]);
//
//	return 0;
//}

//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//
//int main()
//{
//	int score[5] = { 0 };						 // 초기화
//	int	size = sizeof(score) / sizeof(score[0]); // 방 하나의 크기
//	int sum = 0;
//
//	for (int i = 0; i < size; i++) {
//		printf("학생 5명의 성적을 입력하세요");
//		scanf("%d", &score[i]);
//	}
//	for (int i = 0; i < size; i++) {
//		sum += score[i];
//	}
//
//	printf("학생들 점수의 총 합은 : %d", sum);
//
//	return 0;
//}

//#include <stdio.h>
//
//int main()
//{
//	char str[100] = "banana";		
//	char str2[6] = "apple";			// 문자열 끝에는 null이 필요하기에 "apple"은 6개가 필요함. 따라서 항상 글자수 + 1개 이상의 크기의 방을 만들어야함 
//	char str3[10] = { 'o', 'r', 'a', 'n', 'g', 'e' }; 
//	char str4[4];
//	str4[0] = 'a';
//	str4[1] = 'b';
//	str4[2] = 'c'; str4[3] = '\0'; // str4의 경우에는 null문자를 마지막에 삽입해줘야 함!
//
//	printf("str: %s\n", str);
//	printf("str2: %s\n", str2);
//	printf("str3: %s\n", str3);
//	printf("str3[6]: %s\n", str3[6]);	// 문자열 끝의 null은 문자가 끝남을 의미. 자동으로 삽입되어 있음
//	printf("str4: %s\n", str4);		
//	printf("str 나머지 방: %s\n", str[10]);	// 나머지 방들은 다 null로 처리되어 있음
//
//	strcpy(str, str2);			// str = str2; -> 잘못된 형태임. 따라서 strcpy()함수를 통해서 복사하기 가능
//	printf("str: %s\n", str);
//
//	strcpy(str, "dog");
//	printf("str: %s\n", str);
//
//	str[0] = 'D';
//	printf("str: %s\n", str);
//
//	return 0;
//}