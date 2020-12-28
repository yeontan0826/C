#include <stdio.h>

int main() {

	for (double t = 0.0; t <= 100.0; t += 10) {
		printf_s("%.2f F = %.2f C\n", t, (t - 32.0) * 5.0 / 9.0);
	}

	return 0;
}