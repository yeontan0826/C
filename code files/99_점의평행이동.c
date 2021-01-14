#include <stdio.h>

typedef struct point {
	int x;
	int y;
} POINT;

POINT translate(POINT, POINT);


int main() {

	POINT p = { 2, 3 };
	POINT delta;
	POINT result;

	printf("�����̵� �� �Ÿ��� �Է��Ͻÿ� (x���� y����) : ");
	scanf_s("%d %d", &delta.x, &delta.y);

	result = translate(p, delta);
	printf("���ο� ���� ��ǥ�� (%d, %d)�Դϴ�.", result.x, result.y);

	return 0;
}

POINT translate(POINT p, POINT delta) {

	POINT new_p;

	new_p.x = p.x + delta.x;
	new_p.y = p.y + delta.y;

	return new_p;
}