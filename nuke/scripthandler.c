#include <sysexits.h>
#include <sys/types.h>
#include <sys/unistd.h>
#include <stdio.h>
#include <sys/wait.h>
#include <stdlib.h>


/*
  execl --> execute in terminal

*/

char* path = "/home/lukkelele/Code/c/nuke";

int main() 
{
	pid_t cpid;
	if (fork() == 0) {  		// Successful fork will return 0
    printf("fork done\n");
		execl("init.sh", "init.sh");
		exit(0);
	} else {
    wait(NULL);
	}
	return 0;
}
