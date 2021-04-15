// 二进制到十进制
#include <stdio.h>

int main() {
	int input, output = 0, i = 1;

	printf("Please input a number ");
	scanf("%d", &input);

	while(input) {
		output = (input % 10 * i) + output;
		input /= 10;
		i *= 2;
	}

	printf("%d", output);
	return 0;
}
