#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <pthread.h>

// A normal C function that is executed as a thread when its name
// is specified in pthread_create()
void *myThreadFun(void *vargp)
{
	//sleep(1);
	int *max = vargp;
	printf("Max Value = %d\n", *max);
	for(i = *max; i>=0; i--) {

		printf("Printing Threading from Thread \n");
	return NULL;
}

int main()
{
	pthread_t tid;
	int max = 10;
	printf("Before Thread\n");
	pthread_create(&tid, NULL, myThreadFun, &max);
	//pthread_join(tid, NULL);
	sleep(1);
	printf("After Thread\n");
	//exit(0);
}
