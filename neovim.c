#include <stdio.h>


int main()
{
	char d = 's';
	printf("%c\n", d);

	int characters[] = {'a', 'b', 'c'};
	int count = 0;

	for (int i = 0 ; i < 3 ; i++) {
		count++;


		printf("This is line %i.\n", count);

		printf("YEHAW! %i\n", i);
	}


	return 0;
}
