#include <stdio.h>
#include <unistd.h>
#include <sys/wait.h>

int main(){
    pid_t pid;
    pid = fork();

    printf("Hello, WSL2\n");
    
    return 0;
}