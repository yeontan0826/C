#include <stdio.h>

int main() {

	FILE* fp;
	errno_t err;

	err = fopen_s(&fp,"sample.txt", "w");
	if (err == 0) {
		puts("���Ͽ��� ����");
	}
	else {
		puts("���Ͽ��� ����");
		return -1;
	}

	fputc('h', fp);
	fputc('e', fp);
	fputc('l', fp);
	fputc('l', fp);
	fputc('o', fp);
	fputc('!', fp);
	fclose(fp);

	return 0;
}