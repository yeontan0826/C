#include <stdio.h>

int main() {
	
	double light_speed = 300000;
	double distance = 149600000;

	printf("빛의 속도는 %lfkm/s\n", light_speed);
	printf("태양과 지구와의 거리 : %lfkm\n", distance);

	double time = distance / light_speed;
	printf("도달 시간 : %lf초", time);

	return 0;
}