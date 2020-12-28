#include <stdio.h>
#include <Windows.h>

HWND hwnd;
HDC hdc;

int main() {

	int x, y, i;

	hwnd = GetForegroundWindow();
	hdc = GetWindowDC(hwnd);

	x = 50;
	y = 50;

	for (i = 0; i < 5; i++) {
		Rectangle(hdc, x, y, x + 30, y + 30);
		x += 100;
	}

	return 0;
}