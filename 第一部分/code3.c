// 十六进制到十进制
#include <stdio.h>

int main() {
	char input[64] = {'0'};
	int i = 0, output = 0, temp;

	printf("please input a number ");
	scanf("%s", &input);

	while(input[i] != '\0') {
		if (input[i] <= '9' && input[i] >= '0') {
			temp = input[i] - '0';
		} else {
			temp = input[i] - 'A';
		}

		output = output * 16 + temp;
		i++;
	}

	printf("%d", output);
}
