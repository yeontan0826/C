#include <stdio.h>
#include <string.h>

char a[50] = "Man is immortal, because he has a soul";
char seps[] = " ,\t\n";
char* token, * context;

int main() {

	token = strtok_s(a, seps, &context);

	while (token != NULL) {
		printf("TOKEN : %s\n", token);
		token = strtok_s(NULL, seps, &context);
	}

	return 0;
}
