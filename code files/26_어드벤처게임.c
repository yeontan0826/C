#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {

	int input;

	printf("동쪽으로 가려면 1을 누르세요\n");
	printf("서쪽으로 가려면 2를 누르세요\n");
	printf("무기를 취하려면 3을 누르세요\n");
	printf("보물을 검색하려면 4를 누르세요\n\n");

	printf("무엇을 하시겠습니까? ");
	scanf("%d", &input);
	
	switch (input) {
	case 1:
		printf("\n8번방으로 이동합니다.");
		break;
	case 2:
		printf("\n10번방으로 이동합니다.");
		break;
	case 3:
		printf("\n현재 무기는 2번입니다.");
		break;
	case 4:
		printf("\n아무것도 찾지 못했습니다.");
		break;
	default:
		printf("\n1~4번중에서 선택하세요.");
		break;
	}

	return 0;
}