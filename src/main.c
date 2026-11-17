#include <stdio.h>
#include <stdlib.h>

void ask_number(float *num1, float *num2) {

	do {
	
		while (getchar() != '\n');
		printf("Enter the first number: ");
		scanf("%f", num1);
	
	} while (getchar() != '\n');

	do {
	
		while (getchar() != '\n');
		printf("Enter the second number: ");
		scanf("%f", num2);
	
	} while (getchar() != '\n');

}

int main(void) {
	
	int operator;
	float num1, num2;

	do {

	printf("\n## Simple Calculator Made By ein ##\n");

	printf("1. Addition\n");
	printf("2. Subtraction\n");
	printf("3. Multiplication\n");
	printf("4. Division\n");
	printf("5. Exit\n");

	printf("Please select operator by a number: ");
	if (scanf("%d", &operator) != 1) {
		while (getchar() != '\n');	
		operator = 0;
	
	}

	switch(operator) {

		default:
			printf("Pick that on the list!\n");
			break;

		case 1:
			ask_number(&num1, &num2);
			printf("%g add by %g equal to %g\n", num1, num2, num1 + num2);
			break;

		case 2:
			ask_number(&num1, &num2);
			printf("%g subtract by %g equal to %g\n", num1, num2, num1 - num2);
			break;

		case 3:
			ask_number(&num1, &num2);
			printf("%g multiply by %g equal to %g\n", num1, num2, num1 * num2);
			break;

		case 4:
			ask_number(&num1, &num2);
			if (num2 == 0) break;
			printf("%g divide by %g equal to %g\n", num1, num2, num1 / num2);
			break;

		case 5:
			printf("Thank you for using this program!\n");
			break;
	
	}

	} while (operator != 5);

	return 0;

}
