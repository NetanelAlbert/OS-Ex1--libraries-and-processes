//
// Created by Netanel Albert on 13/04/2020.
//
#define _GNU_SOURCE

#include <sched.h>
#include <stdio.h>
#include <unistd.h>

#define STACK_SIZE 100000
char t1Stack[STACK_SIZE+1];
char t2Stack[STACK_SIZE+1];
char t3Stack[STACK_SIZE+1];

int run2_1(void *params){
    //printf("- - - subtask 1 - - -\n");
    char * args[2] = {"./2_1.exe",NULL};
    execvp(args[0],args);
    return 0;
}
int run2_2(void *params){
    //printf("- - - subtask 2 - - -\n");
    char * args[2] = {"./2_2.exe",NULL};
    execvp(args[0],args);
    return 0;
}
int run2_3(void *params){
    //printf("- - - subtask 3 - - -\n");
    char * args[2] = {"./2_3.exe",NULL};
    execvp(args[0],args);
    return 0;
}
int main(){
    //CLONE_PARENT
    clone(run2_1, t1Stack+STACK_SIZE, 0, 0);
    clone(run2_2, t2Stack+STACK_SIZE, 0, 0);
    clone(run2_3, t3Stack+STACK_SIZE, 0, 0);

    sleep(5);

    return 0;
}