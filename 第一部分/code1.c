// 十进制到二进制
#include <stdio.h>

int main() {
	int input, i = 0;
	int output[64];

	printf("Please input a number: ");
	scanf("%d", &input);

	if (input < 0)
		return 1;

	while (input) {
		output[i++] = (input % 2);
		input /= 2;
	}

	i--;

	for( ; i >= 0; i--) {
		printf("%d", output[i]);
	}
	
	return 0;
}
