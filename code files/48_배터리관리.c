#include <stdio.h>

int main() {

	double remaining, capacity, amount;
	
	remaining = 3000;
	capacity = 5000;

	printf_s("���� �����ִ� ������ : %f\n\n", remaining);

	while (remaining > capacity * 0.10) {
		printf_s("����<+>/���<-> : ");
		scanf_s("%lf", &amount);
		remaining = remaining + amount;

		if (remaining < 0.0) {
			remaining = 0.0;
		}
		if (remaining > capacity) {
			remaining = capacity;
		}
		printf_s("���� ���� �ִ� ������ : %f\n", remaining);
	}

	printf_s("���! �����ϼ���!");

	return 0;
}