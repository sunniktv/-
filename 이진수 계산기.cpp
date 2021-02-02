#include <iostream>

int main() {
	for (int i = 0; i < 100000; i ++) {
		printf("순닉이진수 계산기\n");
		int input = 0;

		scanf_s("%d", &input);
		fseek(stdin, 0, SEEK_END);
	
		if (input == 0) {
			printf("0\n");
		}
		if (input == 1) {
			printf("1\n");
		}
		if (input == 2) {
			printf("10\n");
		}
		if (input == 3) {
			printf("11\n");
		}
		if (input == 4) {
			printf("100\n");
		}
		if (input == 5) {
			printf("101\n");
		}
		if (input == 6) {
			printf("110\n");
		}
		if (input == 7) {
			printf("111\n");
		}
		if (input == 8) {
			printf("1000\n");
		}
		if (input == 9) {
			printf("1001\n");
		}
		if (input == 10) {
			printf("1010\n");
		}
		if (input == 11) {
			printf("1011\n");
		}
		if (input == 12) {
			printf("1100\n");
		}
		if (input == 13) {
			printf("1101\n");
		}
		if (input == 14) {
			printf("1111\n");
		}
		if (input == 15) {
			printf("10000\n");
		}
		if (input == 16) {
			printf("10001\n");
		}
		if (input == 17) {
			printf("10010\n");
		}
	} 
	return 0;
}