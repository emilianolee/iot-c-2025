///*
//
//*/
//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//#include <string.h>
//#include <stdlib.h>
//
//struct MyStruct
//{
//	char name[20];
//	int age;
//	double height;
//	char* str;
//};
//
//int main()
//{
//	struct MyStruct s;
//
//	strcpy(s.name, "Lee Yechan");
//	s.age = 26;
//	s.height = 174.1;
//	s.str = (char*)malloc(sizeof(100));
//	printf("�λ縻: ");
//	fgets(s.str, 100, stdin);
//
//	printf("�̸�: %s\n", s.name);
//	printf("����: %d\n", s.age);
//	printf("Ű: %.lf\n", s.height);
//	printf("�λ縻: %s\n", s.str);
//
//	free(s.str);
//
//	return 0;
//}