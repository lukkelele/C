#include <stdio.h>
#include <math.h>
#include <string.h>


double a, b, sum;
int choice;
/* Declaration of functions */ 
void menu();
void submenu(int c);
double add(double a, double b);
double subtract(double a, double b);
double divide(double a, double b);
double mul(double a, double b);
double powerOf(double a, double b);

int main()
{
	printf("\n(C)alculator\n");
	menu();
	submenu(choice);
	return 0;
}

void menu()
{
	printf("Commands:\n1. (add)\n2. (sub)\n3. (mul)\n4. (div)\n5. (pow)\nenter: ");
	scanf("%d", &choice);
	
}

void submenu(int c) 
{
	switch (c) {
		case 1:
			printf("a = ");
			scanf(" %lf", &a); 
			printf("b = ");
			scanf(" %lf", &b); 
			sum = add(a, b);
			printf("%lf + %lf = %lf\n", a, b, sum);
			break;
		case 2:
			printf("a = ");		
			scanf(" %lf", &a);
			printf("b = ");
			scanf(" %lf", &b); 
			sum = subtract(a, b);	
			printf("%lf - %lf = %lf\n", a, b, sum);
			break;
		case 3:
			printf("a = ");
			a = scanf(" %lf", &a); 
			printf("b = ");
			b = scanf(" %lf", &b);
			sum = mul(a, b);
			printf("%f + %f = %f\n", a, b, sum);
			break;
		case 4:
			scanf(" %lf", &a); 
			scanf(" %lf", &b);
			sum = divide(a, b);
			printf("%f / %f = %f\n", a, b, sum);
			break;
		case 5:
			scanf(" %lf", &a); 
			scanf(" %lf", &b);
			sum = powerOf(a, b);
			printf("%f^(%f) = %f\n", a, b, sum);
			break;
			
			break;
		default:
			printf("\nERROR!\nMake sure to enter the menu alternative correctly.\n");
			break;

	}
}


double divide(double number, double divider)
{
	int integer_division = number/divider;
	double remainder = fmod(number, divider);
	return (integer_division+remainder);
}

double mul(double multiplicand, double factor)
{
	return (multiplicand*factor);
}

double powerOf(double base, double power)
{
	double result = 1;
	for (int k = 1 ; k <= power ; k++) {
		result = base * result;
	}
	return result;
}

double subtract(double a, double b)
{
	return (a-b);
}

double add(double a, double b)
{
	return (a+b);
}
