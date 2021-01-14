#include <stdio.h>

struct student {
	char name[10];
	int eng;
	int math;
	int phys;
};

struct student list[] = {
	{"È«±æµ¿", 90, 80, 90},
	{"±èÃ¶¼ö", 85, 90, 100},
	{"·ùÄÚµù", 100, 95, 100},
	{"µü»õ¿ì", 95, 100, 90}
};

int main() {

	int size = sizeof(list)/24;

	for (int i = 0; i < size;i++) {
		printf("%s : ¿µ¾î-%d  ¼öÇĞ-%d  ¹°¸®-%d\n",list[i].name, list[i].eng, list[i].math, list[i].phys);
	}

	return 0;
}