#include <stdio.h>

#define SIZE 11

int main() {
	
	int arr[SIZE] = { 0 };
	int num;

	while (1) {
		printf("1부터 10번의 연예인 중 몇 번을 선택하시겠습니까?(종료: -1) : ");
		scanf_s("%d", &num);
		
		if (num == -1) break;

		if (num < 1 || num>10) {
			printf("1부터 10번의 연예인 중에서 고르세요.\n");
			continue;
		}

		arr[num]++;
	}

	printf("\n===============\n");
	printf(" 값   득표결과");
	printf("\n===============\n");
	
	for (int i = 1; i < SIZE; i++) {
		printf(" %2d       %d\n", i, arr[i]);
	}

	return 0;
}