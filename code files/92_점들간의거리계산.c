#include <stdio.h>
#include <math.h>

struct point {
	int x;
	int y;
};

int main() {

	struct point p1, p2;
	double dist, xdif, ydif;

	printf("ù��° ��ǥ(x y) : ");
	scanf_s("%d %d", &p1.x, &p1.y);
	printf("�ι�° ��ǥ(x y) : ");
	scanf_s("%d %d", &p2.x, &p2.y);

	xdif = (double)(p1.x - p2.x);
	ydif = (double)(p1.y - p2.y);
	dist = sqrt(xdif * xdif + ydif * ydif);

	printf("�Ÿ� �� : %f", dist);

	return 0;
}