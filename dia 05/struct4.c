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
//	struct profile pf;		// ����ü ���� ����ü�� ����� �� �� ����
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
//	printf("Ű: %.2lf\n������: %.2lf\n����: %d\n����: %.lf\n�й�: %d", s.pf.height, s.pf.weight, s.pf.age, s.grade, s.id);
//
//	return 0;
//}