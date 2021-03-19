#include <stdio.h> 
#include <sys/types.h> 
#include <unistd.h> 
int main() 
{ 
    switch (fork())
    {
    case 0:
        printf("child PID is: %d\n", getpid());
        break;
    default:
        printf("parent PID is: %d\n", getpid());
        break;
    }
    return 0; 
}
