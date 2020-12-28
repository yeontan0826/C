#include <stdio.h>

int main() {

	double remaining, capacity, amount;
	
	remaining = 3000;
	capacity = 5000;

	printf_s("현재 남아있는 충전량 : %f\n\n", remaining);

	while (remaining > capacity * 0.10) {
		printf_s("충전<+>/사용<-> : ");
		scanf_s("%lf", &amount);
		remaining = remaining + amount;

		if (remaining < 0.0) {
			remaining = 0.0;
		}
		if (remaining > capacity) {
			remaining = capacity;
		}
		printf_s("현재 남아 있는 충전량 : %f\n", remaining);
	}

	printf_s("경고! 충전하세요!");

	return 0;
}