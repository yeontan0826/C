#include <stdio.h>

int main() {

	int c;
	FILE* fp1, * fp2;
	errno_t err1 = fopen_s(&fp1, "sample1.txt", "r"),
		err2 = fopen_s(&fp2, "sample2.txt", "w");

	if (err1 == 0 && err2 == 0) {
		puts("���Ͽ��� ����\n");
	} else {
		puts("���Ͽ��� ����\n");
		return -1;
	}

	while ((c = fgetc(fp1)) != EOF) {
		fputc(c, fp2);
	}
	puts("����Ϸ�\n");
	
	fclose(fp1);
	fclose(fp2);

	return 0;
}