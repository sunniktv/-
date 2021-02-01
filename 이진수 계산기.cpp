

#include <iostream>

int main() {
	for (int i = 0; i < 100000; i++) {
		printf("순닉이진수 계산기\n");
		int input = 0;

		scanf_s("%d", &input);
		fseek(stdin, 0, SEEK_END);
	
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
			printf("1000\n");
		}
	} 
		return 0;
	}
