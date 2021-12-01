#include <stdio.h>
#include <string.h>



int main()
{
	
	char *ps, *pd;
	ps = "Hello";
	pd = "Hi";
	printf("\n*ps == %s\n*pd == %s\n\n", ps, pd);
	
	char *px;
	px = ps;
	
	for (int k=0 ; k<strlen(ps) ; k++) {
		printf("*px == %c\n", *px++);
	}

	printf("// manipulation\n");

	px = ps;
	printf(" px = ps --> this resets the pointer back to H\n*px == %c\n", *px);
	px = ++ps;
	printf(" px = ++ps\n*px == %c\n", *px);


	return 0;
}
