// 十进制到十六进制
#include <stdio.h>

int main() {
	int input, temp, i = 0;
	char output[64];

	printf("Please input a number: ");
	scanf("%d", &input);

	if (input < 0)
		return 1;

	while (input) {
		temp = input % 16;
		if (temp < 10) {
			output[i++] = temp + '0';
		} else {
			output[i++] = temp - 10 + 'A';
		}

		input /= 16;
	}

	i--;

	for( ; i >= 0; i--) {
		printf("%c", output[i]);
	}
	
	return 0;
}
