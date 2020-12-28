#include <stdio.h>

int main() {

	int i = 1;
	int sum = 0;

	while (i <= 10) {
		sum += i;
		i++;
	}

	printf("1부터 10까지의 합계는 %d입니다.", sum);

	return 0;
}