#include <stdio.h>
#include <time.h>

struct students {
	int number;
	char name[10];
	double gpa;
};

struct students list[] = {
	{201721001, "박영어", 0},
	{201721002, "김수학", 0},
	{201721003, "류코딩", 0},
	{201721004, "박물리", 0},
	{201721005, "황체육", 0}
};

int main() {

	struct students top;
	int size = sizeof(list) / sizeof(list[0]);

	top = list[0];

	srand((unsigned)time(NULL));
	for (int i = 0; i < size; i++) {
		list[i].gpa = (double)(rand() % 45) / 10.0;
	}
	
	printf("======= 학생 명단 =======\n");
	for (int i = 0; i < size; i++) {
		printf("%d  %s  %.1f\n", list[i].number, list[i].name, list[i].gpa);
	}
	printf("\n");
	
	printf("======= 장학생 =======\n");
	for (int i = 0; i < size; i++) {
		if (list[i].gpa > top.gpa) {
			top = list[i];
		}
	}

	printf("%d  %s  %.1f\n", top.number, top.name, top.gpa);

	return 0;
}