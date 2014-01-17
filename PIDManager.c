#include <stdlib.h>
#include <stdio.h>
#include <string.h>

#include "PIDManager.h"



int allocate_map() {
	for(int i = 0; i < MAX_PID; i++) {
		pid_map[i] = 0;
	}
	return 1;
}

int allocate_pid() {
	for(int i = 0; i < MAX_PID; i++) {
		if(pid_map[i] == 0) {
			pid_map[i] = 1;
			return i + MIN_PID;
		}
	}
	return 1;
}

void release_pid(int pid) {
	pid_map[MIN_PID + pid] = 0;
}