#include <stdio.h>

struct student {
	char name[10];
	int eng;
	int math;
	int phys;
};

struct student list[] = {
	{"ȫ�浿", 90, 80, 90},
	{"��ö��", 85, 90, 100},
	{"���ڵ�", 100, 95, 100},
	{"������", 95, 100, 90}
};

int main() {

	int size = sizeof(list)/24;

	for (int i = 0; i < size;i++) {
		printf("%s : ����-%d  ����-%d  ����-%d\n",list[i].name, list[i].eng, list[i].math, list[i].phys);
	}

	return 0;
}