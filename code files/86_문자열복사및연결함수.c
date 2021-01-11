#include <stdio.h>

int main() {

	printf("===== COPY =====\n");

	char a[50] = "setence1";
	char b[50];

	strcpy(b, a);

	printf("%s", b);

	printf("\n\n===== LINK =====\n");

	char c[50];

	strcpy(c, "Hello!!");
	strcat(c, "A");
	strcat(c, "B"); 
	strcat(c, "C");

	printf("%s", c);

	return 0;
}