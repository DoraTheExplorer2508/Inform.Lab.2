#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	char str[1000];
	printf("Input string:");
	fgets(str, 1000, stdin);
	int m = 0;
	while (str[m] != 0) {
		if (str[m] == ' ')
		{
			printf("%c%c", ' ', ' ');
			m = m + 1;
		}
		else {
			printf("%c", str[m]);
			m = m + 1;
		}
	}
	return 0;
}