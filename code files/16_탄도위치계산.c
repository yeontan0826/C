#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

#define g 9.8
#define vx 20.0
#define vy 20.0
#define x0 0.0
#define y0 0.0

int main() {

	double x, y, t;

	t = 1.0;
	x = x0 + (vx * t);
	y = y0 + (vy * t) - (0.5 * g * (t * t));
	printf("1������ ��ġ = <%f, %f>\n", x, y);

	t = 2.0;
	x = x0 + (vx * t);
	y = y0 + (vy * t) - (0.5 * g * (t * t));
	printf("2������ ��ġ = <%f, %f>\n", x, y);

	t = 3.0;
	x = x0 + (vx * t);
	y = y0 + (vy * t) - (0.5 * g * (t * t));
	printf("3������ ��ġ = <%f, %f>", x, y);

	return 0;
}