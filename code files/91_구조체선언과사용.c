#include <stdio.h>

struct point {
	int x;
	int y;
};

int main() {

	struct point p1, p2;

	p1.x = 10;
	p1.y = 20;

	p2.x = 15;
	p2.y = 8;

	printf("ù��° ��ǥ(x,y) = %d %d\n", p1.x, p1.y);
	printf("�ι�° ��ǥ(x,y) = %d %d\n", p2.x, p2.y);
	return 0;
}