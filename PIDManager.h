int MAX_PID = 5000;
int  MIN_PID = 500;
int PID_RANGE = 4700;
int pid_map[4700];

int allocate_map();

int allocate_pid();

void release_pid(int pid);