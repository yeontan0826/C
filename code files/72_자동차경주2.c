#include <stdio.h>
#include <Windows.h>
#include <math.h>
#include <time.h>

HWND hwnd;
HDC hdc;

void disp_car(int, int);
void clear_screen(void);

int main() {

	int car1_dist = 0, car2_dist = 0;

	hwnd = GetForegroundWindow();
	hdc = GetWindowDC(hwnd);

	srand((unsigned)time(NULL));

	for (int i = 0; i < 20; i++) {
		clear_screen();
		car1_dist += rand() % 100;
		car2_dist += rand() % 100;
		disp_car(1, car1_dist);
		disp_car(2, car2_dist);
		_getch();
	}
	return 0;
}

void disp_car(int car_num, int dist) {
	if (car_num == 1) {
		Rectangle(hdc, dist, 100, 50 + dist, 150);
	}
	if (car_num == 2) {
		Rectangle(hdc, dist, 200, 50 + dist, 250);
	}
}

void clear_screen(void) {
	Rectangle(hdc, 0, 0, 1000, 1000);
}