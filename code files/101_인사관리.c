#include <stdio.h>

#define NUM 2

typedef enum {
	SALES, PERSONNEL, RESEARCH, PACKING
} DEPT;

typedef struct {
	char name[10];
	int age;
	int salary;
	DEPT department;
} EMPLOYEE;

void print_employee(EMPLOYEE);

int main() {

	EMPLOYEE employees[NUM];

	for (int i = 0; i < NUM; i++) {
		printf("===============================\n");
		printf("이름을 입력하시오 : ");
		scanf_s("%s", &employees[i].name, 10);
		printf("나이를 입력하시오 : ");
		scanf_s("%d", &employees[i].age);
		printf("월급을 입력하시오(만 단위) : ");
		scanf_s("%d", &employees[i].salary);
		printf("부서를 입력하시오\n");
		printf("[0:SALES     1:PERSONNEL     2:RESEARCH     3:PACKING]\n");
		printf("-> ");
		scanf_s("%d", &employees[i].department);
	}

	printf("\n\n");

	printf("===========  명  단  =========\n");
	for (int i = 0; i < NUM; i++) {
		print_employee(employees[i]);
	}

	return 0;
}

void print_employee(EMPLOYEE e) {
	printf("이름 : %s\n", e.name);
	printf("나이 : %d\n", e.age);
	printf("월급 : %d만원\n", e.salary);
	printf("부서 : %d\n", e.department);
	printf("===============================\n");
}