/* Cooperative | Preemptive - balancing the quanta
 * Low quanta -- responsive but can do lots of switching.
 * High quanta -- Not responsive
 */

#include <pthread.h>
#include <syscall.h>
#include <stdio.h>

#define  PCB_SIZE  	  5		  // Processor Control Block
#define  CACHE				10		// Multidimensional array
#define  pid_default -1 

typedef struct process {

	int pid, wait_time, cpu_time, burst_time, arrival;

} Process;


Process container[CACHE] = {0, 0, 0, 0 ,0 ,0 ,0 ,0 ,0, 0};

int getActiveAmount();



Process newProcess()
{
	Process p;
	Process *pc = container;
	if (pc == NULL) {
		p.pid = 1;
	} else {
		int active = getActiveAmount();
		p.pid = ++active;
	}

	return p;
}


int getActiveAmount()
{
	int k = 0;
	Process *pc;
	pc = container;
	while (container[k]. == 0)
	{
		printf("entered loop hey\n");
		k++;
	}
	return k;
}


int fetchProcessInfo(Process p)
{
	return p.pid;
}

void activeProcesses()
{
	int c = 0;
	Process *pc = container;
	while (pc != NULL)
	{
		printf("pid: %d\n", fetchProcessInfo(*pc));
		*pc++;
	}
}


// Testing
//
int main(void)
{

	Process processes[CACHE];
	int n_processes = 0;
	Process p1, p2, p3;

	p1 = newProcess();
	p2 = newProcess();
	p3 = newProcess();

	processes[0] = p1;
	processes[1] = p2;
	processes[2] = p3;

	activeProcesses();

}
	






