#include <stdio.h>

int words(char* str) {
	int len = 0, k = 0;
	int wrdp[100];
	wrdp[0] = 0;
	while (str[len] != '\0') {
		if (str[len] == ' ' || str[len] == '.' || str[len] == ',' || str[len] == '\n' || str[len] == '\t') {
			wrdp[k] = len;
			printf("word position: %d\n", wrdp[k]);
			len++;
			k++;
		}
		else {
			len++;
		}
	}
	printf("word count: %d", k);
	return len;
}

int main() {
	char str[100];
	fgets(str, 100, stdin);
	int i = 0;
	while (str[i] != '\0') {
		i++;
	}
	if (i == 1) {
		printf("No string\n");
	}
	else {
		int s;
		s = words(str);
	}
	return 0;
}