#include <stdio.h>

typedef struct {
	int x;
	int y;
} POINT;

int main() {

	POINT p1 = { 3,4 };
	POINT p2 = { 3,4 };

	if (equal(&p1, &p2)) {
		printf("�� ���� �����ϴ�.");
	} else {
		printf("�� ���� �ٸ��ϴ�.");
	}

	return 0;
}

int equal(POINT* p1, POINT* p2) {

	if (p1->x == p2->x && p1->y == p2->y) {
		return 1;
	} else {
		return 0;
	}
}