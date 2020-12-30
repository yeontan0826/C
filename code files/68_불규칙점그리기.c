#include <stdio.h>
#include <Windows.h>
#include <stdlib.h>
#include <time.h>

HWND hwnd;
HDC hdc;

int main() {

	int x, y, red, green, blue;

	hwnd = GetForegroundWindow();
	hdc = GetWindowDC(hwnd);

	srand((unsigned)time(NULL));
	
	for (int i = 0; i < 20000; i++) {
		x = rand() % 500;
		y = rand() % 500;

		red = rand() % 256;
		green = rand() % 256;
		blue = rand() % 256;

		SetPixel(hdc, x, y, RGB(red, green, blue));
	}
	_getch();

	return 0;
}