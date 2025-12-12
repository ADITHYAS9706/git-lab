#include<sys/types.h>
#include<unistd.h>
#include<stdio.h>
#include<sys/wait.h>
int main()
{
    pid_t p;
    p=fork();
    if(p==0)
    {
        printf("child process id created is %d",getpid());
        execl("./os lab3","os lab3",NULL);
    }
    else
    { 
        wait(NULL);
        printf("child process id exited is %d",p);
        printf("parent process id created is %d",getpid());
    }
    return 0;
}
    