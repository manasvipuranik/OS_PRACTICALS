#include<stdio.h>
#include<unistd.h>
int main(){
        int cpro;
        cpro=fork();
        if(cpro<0){
                printf("Process not found");
        }
        else if(cpro==0){
                printf("Process created");
                printf("child process %d",getpid());
                printf("parent process %d",getppid());
        }}
