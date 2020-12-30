#include <stdio.h>
#include <Windows.h>
#include <stdlib.h>
#include <conio.h>

#define WIDTH 50
#define HEIGHT 50

HWND hwnd;
HDC hdc;

void gotoxy(int x, int y);
void print_score(int s);
void draw_me(int x, int y);
void draw_enemy(int x, int y);
int check_overlap(int x1, int y1, int x2, int y2);
void clear_screen(void);

int main() {

	int me_x, me_y;
	int enemy_x, enemy_y;
	int score = 0;
	int keycode;

	hwnd = GetForegroundWindow();
	hdc = GetWindowDC(hwnd);

	me_x = 100;
	me_y = 100;
	enemy_x = rand() % 300;
	enemy_y = rand() % 300;

	while (1) {
		clear_screen();
		print_score(score);
		draw_me(me_x, me_y);
		draw_enemy(enemy_x, enemy_y);

		if (check_overlap(me_x, me_y, enemy_x, enemy_y) == 1) {
			score++;
			enemy_x = rand() % 300;
			enemy_y = rand() % 300;
			continue;
		}

		keycode = _getch();
		switch (keycode) {
		case 77:
			me_x += 20;
			break;
		case 75:
			me_x -= 20;
			break;
		case 80:
			me_y += 20;
			break;
		case 72:
			me_y -= 20;
			break;
		case 'q':
			return 0;
		}
	}
	return 0;
}

void gotoxy(int x, int y) {
	COORD coord = { 0, 0 };
	coord.X = x;
	coord.Y = y;
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coord);
}

void print_score(int s) {
	gotoxy(1, 1);
	printf("현재점수 = %d", s);
}

void draw_me(int x, int y) {
	Rectangle(hdc, x, y, x + WIDTH, y + HEIGHT);
}

void draw_enemy(int x, int y) {
	Ellipse(hdc, x, y, x + WIDTH, y + HEIGHT);
}

int check_overlap(int x1, int y1, int x2, int y2) {
	if ((x1 + WIDTH) < x2 || (x2 + WIDTH) < x1) {
		return 0;
	}
	if ((y1 + HEIGHT) < y2 || (y2 + HEIGHT) < y1) {
		return 0;
	}
	return 1;
}

void clear_screen(void) {
	Rectangle(hdc, 0, 0, 1000, 1000);
}