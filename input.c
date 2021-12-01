// User input functions that manipulate character arrays
//
// Dependencies: stdio.h
// Author: Lukas Gunnarsson
// Date: 1/12-2021

#include <stdio.h>

#define BUF_SIZE 	70

void copy(char to[], char from[]);
int getString(char s[], int lim);


/* getInput(), read character input and place it in s
 * returns length of string		            */
int getString(char s[], int lim)
{
	char c;
	int  n = 0;
	for (int k = 0 ; k < lim-1 && (c=getchar()) != EOF ; k++) {	
		s[k] = c;
		n++;
		if (c == '\n') {
			break;
		}
	}
	s[++n] = '\0';	// k < lim-1 provides space for last char '\0'
	return n;
}

/* In case of overflows	*/
void copy(char to[], char from[])
{
	sprintf(to, "%s", from);
	printf("\nto[] equals %s\nfrom[] equals %s", to, from);

}

int main()
{
	char str[BUF_SIZE];
	int lim = 30;

	int num = getString(str, lim);

	printf("The string is %s\nLength == %d with '\\0' and '\\n' included!\n", str, num);

	char buff[100];
	copy(buff, str);

	return 0;
}

	
