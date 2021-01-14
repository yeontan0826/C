#include <stdio.h>
#include <time.h>

struct students {
	int number;
	char name[10];
	double gpa;
};

struct students list[] = {
	{201721001, "�ڿ���", 0},
	{201721002, "�����", 0},
	{201721003, "���ڵ�", 0},
	{201721004, "�ڹ���", 0},
	{201721005, "Ȳü��", 0}
};

int main() {

	struct students top;
	int size = sizeof(list) / sizeof(list[0]);

	top = list[0];

	srand((unsigned)time(NULL));
	for (int i = 0; i < size; i++) {
		list[i].gpa = (double)(rand() % 45) / 10.0;
	}
	
	printf("======= �л� ��� =======\n");
	for (int i = 0; i < size; i++) {
		printf("%d  %s  %.1f\n", list[i].number, list[i].name, list[i].gpa);
	}
	printf("\n");
	
	printf("======= ���л� =======\n");
	for (int i = 0; i < size; i++) {
		if (list[i].gpa > top.gpa) {
			top = list[i];
		}
	}

	printf("%d  %s  %.1f\n", top.number, top.name, top.gpa);

	return 0;
}