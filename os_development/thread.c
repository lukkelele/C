#include <stdio.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/wait.h>
#include "user_input.h"


#define CPU_freq 4700000000   // 4,7 GHz


int main() 
{

	pid_t child_pid;		// Process ID
	child_pid = fork();		// Create child process

	char a[] = "Hello";
	int lim = 50;
	int lineNum = getString(a, lim);




	return 0;
}
	
