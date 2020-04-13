//
// Created by Netanel Albert on 12/04/2020.
//
#define _GNU_SOURCE
#include <stdio.h>
#include <sched.h>
#include <unistd.h>
#define STACK_SIZE 10000


pid_t task2_1(){
    pid_t processId = fork(); // creat child
    if(processId == 0){
        //in child process
        processId = fork(); // creat grandchild
        if(processId == 0){
            //in grandchild process
            printf("grandchild process\n");
        } else {
            printf("child process\n");
        }
        sleep(5) ; // for me to have enough time to use pstree
        return 0;
    } else {
        printf("father process\n");
    }
    return  processId;
}

int child1Func(void *params){
    printf("child 1 thread\n");
    sleep(5); // for me to have enough time to use pstree
}
int child2Func(void *params){
    printf("child 2 thread\n");
    sleep(5); // for me to have enough time to use pstree
}

char child1Stack[STACK_SIZE+1];
char child2Stack[STACK_SIZE+1];
void task2_2(){
    clone(child1Func, child1Stack+STACK_SIZE, CLONE_PARENT, 0);
    clone(child2Func, child2Stack+STACK_SIZE, CLONE_PARENT, 0);

    printf("father thread\n");
}

void task2_3(){
    pid_t pid = fork(); // creat child
    if(pid < 0)
        return;
    if(pid > 0){
        printf("Demon pid: %d\n", pid);
    } else {
        chdir("/");
        setsid();
        printf("Demon closing std io channels\n");
        fclose(stdin);
        fclose(stdout);
        fclose(stderr);

        sleep(5); // for me to have enough time to use pstree
    }
}

int main(){
    printf("- - - subtask 1 - - -\n");
    pid_t pid = task2_1();
    if(pid > 0) {
        printf("\n- - - subtask 2 - - -\n");
        task2_2();

        printf("\n- - - subtask 3 - - -\n");
        task2_3();
    }
    sleep(5); // for me to have enough time to use pstree

}