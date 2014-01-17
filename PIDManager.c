#include <stdlib.h>
#include <stdio.h>
#include <string.h>

#include "PIDManager.h"

int allocate_map() {
	for(int i = 0; i < 4700; i++) {
		pid_map[i] = 0;
	}
	return 1;
}

int allocate_pid() {
	for(int i = 0; i < 4700; i++) {
		if(pid_map[i] == 0) {
			pid_map[i] = 1;
			return i + 300;
		}
	}
	return 1;
}

void release_pid(int pid) {
//	pid_map[pid + 300] = 0;
}