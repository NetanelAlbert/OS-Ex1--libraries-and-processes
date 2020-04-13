//
// Created by Netanel Albert on 12/04/2020.
//
#define _GNU_SOURCE

#include <sched.h>
#include <stdio.h>
#include <unistd.h>

#define STACK_SIZE 10000

int child1Func(void *params){
    printf("child 1 thread\n");
    usleep(5000000); // for me to have enough time to use pstree
}
int child2Func(void *params){
    printf("child 2 thread\n");
    usleep(5000000); // for me to have enough time to use pstree
}

char child1Stack[STACK_SIZE+1];
char child2Stack[STACK_SIZE+1];

int main(){

    clone(child1Func, child1Stack+STACK_SIZE, CLONE_PARENT, 0);
    clone(child2Func, child2Stack+STACK_SIZE, CLONE_PARENT, 0);

    printf("father thread\n");
    usleep(5000000); // for me to have enough time to use pstree

    return 0;
}