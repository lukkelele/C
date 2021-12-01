#include <stdio.h>

#define BUF_SIZE 100

char str[BUF_SIZE];

void getStringInput();

int main()
{
	printf("\n(C)alculator\n");

	printf("String == %s", str);

	return 0;
}



double divide(int number, int divider)
{
	int integer_division = number/divider;
	float remainder = number%divider;
	return (integer_division+remainder);
}

double multiply(int multiplicand, int factor)
{
	return (multiplicand*factor);
}

double powerOf(int base, int power)
{
	for (int k = 0 ; k <= power ; k++) {
		base = base*k;
	}
	return base;
}

double subtract(int a, int b)
{
	return (a-b);
}

double add(int a, int b)
{
	return (a+b);
}
