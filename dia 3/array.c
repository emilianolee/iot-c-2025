/* 
	�迭 : ������ �ڷḦ ���������� �����ϴ� ��
	 - ȿ�������� �����Ϳ� �����Ͽ� �����ϱ� ���� �ڷᱸ�� �˰����� ���. �̰��� ������� �迭 
	 - �迭�̸��� �ּҴ�
	 - �迭�� ������ for ��!!
	 - ���� : ���� �����ؼ� �迭�� ����� ������ �� �ִ�,
	 - ���� : ������ �����. 
*/
//#include <stdio.h>
//
//int main()
//{
//	int ary[5] = { 1, 2, 3, 4, 5 };		// ������ �迭 ����(4byte 5�� -> �ּ� 20byte)
//	int ary2[] = { 6, 7, 8, 9, 10 };	// �� ������ �迭 ���� ����(�� ��쿡�� �� ���� ����� ����)
//	int ary3[5];						// �� ������ �迭 ���� ����(But ���� ���� ����)
//	//int ary4[];						// �̰� �Ұ��� ��!
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
//	int ary[] = { 1, 2, 3 }; // �迭�� ũ�� -> int(4Byte) 3�� => 12
//
//	printf("�迭�� ��ü ũ��: %d\n", sizeof(ary));
//	printf("�迭 �� �Ѱ��� ũ��: %d\n", sizeof(ary[0]));
//	printf("�迭 ���� ����: %d\n", sizeof(ary) / sizeof(ary[0]));
//	printf("�迭 �̸�: %p\n", ary);
//	printf("�迭�� ù��° �� �ּ�: %p\n", &ary[0]);		// �迭 �̸��� �迭�� ù��° �� �ּҿ� ����
//	printf("�迭�� �ι�° �� �ּ�: %p\n", ary + 1);	// �迭 �ι�° ���� �ּ� 
//	printf("�迭�� �ι�° �� �ּ�: %p\n", &ary[1]);
//
//	return 0;
//}

//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//
//int main()
//{
//	int score[5] = { 0 };						 // �ʱ�ȭ
//	int	size = sizeof(score) / sizeof(score[0]); // �� �ϳ��� ũ��
//	int sum = 0;
//
//	for (int i = 0; i < size; i++) {
//		printf("�л� 5���� ������ �Է��ϼ���");
//		scanf("%d", &score[i]);
//	}
//	for (int i = 0; i < size; i++) {
//		sum += score[i];
//	}
//
//	printf("�л��� ������ �� ���� : %d", sum);
//
//	return 0;
//}

//#include <stdio.h>
//
//int main()
//{
//	char str[100] = "banana";		
//	char str2[6] = "apple";			// ���ڿ� ������ null�� �ʿ��ϱ⿡ "apple"�� 6���� �ʿ���. ���� �׻� ���ڼ� + 1�� �̻��� ũ���� ���� �������� 
//	char str3[10] = { 'o', 'r', 'a', 'n', 'g', 'e' }; 
//	char str4[4];
//	str4[0] = 'a';
//	str4[1] = 'b';
//	str4[2] = 'c'; str4[3] = '\0'; // str4�� ��쿡�� null���ڸ� �������� ��������� ��!
//
//	printf("str: %s\n", str);
//	printf("str2: %s\n", str2);
//	printf("str3: %s\n", str3);
//	printf("str3[6]: %s\n", str3[6]);	// ���ڿ� ���� null�� ���ڰ� ������ �ǹ�. �ڵ����� ���ԵǾ� ����
//	printf("str4: %s\n", str4);		
//	printf("str ������ ��: %s\n", str[10]);	// ������ ����� �� null�� ó���Ǿ� ����
//
//	strcpy(str, str2);			// str = str2; -> �߸��� ������. ���� strcpy()�Լ��� ���ؼ� �����ϱ� ����
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