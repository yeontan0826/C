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

	printf("평행이동 할 거리를 입력하시오 (x방향 y방향) : ");
	scanf_s("%d %d", &delta.x, &delta.y);

	result = translate(p, delta);
	printf("새로운 점의 좌표는 (%d, %d)입니다.", result.x, result.y);

	return 0;
}

POINT translate(POINT p, POINT delta) {

	POINT new_p;

	new_p.x = p.x + delta.x;
	new_p.y = p.y + delta.y;

	return new_p;
}