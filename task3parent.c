#include <stdio.h> 
#include <sys/types.h> 
#include <unistd.h> 
int main() 
{ 
    printf("old process PID is: %d\n", getpid());
    char *args[] = {NULL};
    execv("./child", args);
    return 0; 
}
