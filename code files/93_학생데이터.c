#include <stdio.h>

struct student {
	int number;
	char name[5];
	double gpa;
};

int main() {

	struct student s;

	s.number = 201721033;
	strcpy(s.name, "������");
	s.gpa = 4.3;

	printf("�й� : %d\n", s.number);
	printf("�̸� : %s\n", s.name);
	printf("���� : %.1f\n", s.gpa);

	return 0;
}