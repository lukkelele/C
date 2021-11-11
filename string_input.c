#include <stdio.h>


// scanf requires pointers


char s;

int main() 
{

	printf("input: ");
	scanf("%s", &s);

	printf("\nOutput: %s\n", &s);

	return 0;

}
	
	



