#include <stdio.h>
#include <ctype.h>
#include <string.h>
#include <stdlib.h>


#define BUF_SIZE 100

int i = 0;
int flag = 0;
char threats[] = {'a','i', 'e', 'o', 'u'};  // y is ignored
char strbuffer[BUF_SIZE];

char* disemvowel(const char* str)
{
  printf("\nlen string == %d", strlen(str));
  while (*str != '\0') {
    char c = tolower(*str);
    char a = *str;
    for (int k=0 ; k<6 ; k++) {
      if (c == threats[k]) {
        flag = 1;
      }
    }
    if (flag != 1) {
      strbuffer[i] = a;
      i++;
    }
    flag = 0;
    str++;
  }

  int memSize = strlen(str)+1;
  char* result = (char*) malloc(memSize);   // Allocated memory space for pointer

  char* ps = strbuffer;

  return result;
}

// Passed test
// 11/12-2021
//
// Better approach --> if !strchr(aeiouAEIOU)
