#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <conio.h>

void disp_car(int, int);

int main() {

	int car1_dis = 0;
	int car2_dis = 0;
	
	srand((unsigned)time(NULL));

	for (int i = 0; i < 6; i++) {
		car1_dis += rand() % 100;
		car2_dis += rand() % 100;
		disp_car(1, car1_dis);
		disp_car(2, car2_dis);

		printf("-------------------------------------------\n");
		_getch();
	}
	return 0;
}

void disp_car(int car_num, int dist) {
	printf("CAR #%d : ", car_num);
	for (int i = 0; i < dist / 10; i++) {
		printf("*");
	}
	printf("\n");
}