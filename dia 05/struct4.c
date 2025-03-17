//#include <stdio.h>
//
//struct profile
//{
//	int age;
//	double height;
//	double weight;
//};
//
//struct student
//{
//	struct profile pf;		// 구조체 내에 구조체가 멤버로 올 수 있음
//	int id;
//	double grade;
//};
//
//int main()
//{
//	struct student s;
//
//	s.grade = 99;
//	s.id = 201910487;
//	s.pf.age = 26;
//	s.pf.height = 173.8;
//	s.pf.weight = 77;
//
//	printf("키: %.2lf\n몸무게: %.2lf\n나이: %d\n성적: %.lf\n학번: %d", s.pf.height, s.pf.weight, s.pf.age, s.grade, s.id);
//
//	return 0;
//}