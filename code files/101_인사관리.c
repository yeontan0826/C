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
		printf("�̸��� �Է��Ͻÿ� : ");
		scanf_s("%s", &employees[i].name, 10);
		printf("���̸� �Է��Ͻÿ� : ");
		scanf_s("%d", &employees[i].age);
		printf("������ �Է��Ͻÿ�(�� ����) : ");
		scanf_s("%d", &employees[i].salary);
		printf("�μ��� �Է��Ͻÿ�\n");
		printf("[0:SALES     1:PERSONNEL     2:RESEARCH     3:PACKING]\n");
		printf("-> ");
		scanf_s("%d", &employees[i].department);
	}

	printf("\n\n");

	printf("===========  ��  ��  =========\n");
	for (int i = 0; i < NUM; i++) {
		print_employee(employees[i]);
	}

	return 0;
}

void print_employee(EMPLOYEE e) {
	printf("�̸� : %s\n", e.name);
	printf("���� : %d\n", e.age);
	printf("���� : %d����\n", e.salary);
	printf("�μ� : %d\n", e.department);
	printf("===============================\n");
}