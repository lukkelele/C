#include <sysexits.h>
#include <sys/types.h>
#include <sys/unistd.h>
#include <stdio.h>
#include <sys/wait.h>
#include <stdlib.h>

int main() 
{
	pid_t cpid;
	if (fork() == 0) {  		// Successful fork will return 0
		execl("signalOutput", "signalOutput");
		exit(0);
	} else {
		cpid = wait(NULL);
		printf("Parent pid = %d\n", getpid());
		printf("Child pid = %d\n", cpid);
	}
	return 0;
}
