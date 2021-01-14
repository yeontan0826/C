#include <stdio.h>

struct student {
	int number;
	char name[5];
	double gpa;
};

int main() {

	struct student s;

	s.number = 201721033;
	strcpy(s.name, "류연찬");
	s.gpa = 4.3;

	printf("학번 : %d\n", s.number);
	printf("이름 : %s\n", s.name);
	printf("평점 : %.1f\n", s.gpa);

	return 0;
}