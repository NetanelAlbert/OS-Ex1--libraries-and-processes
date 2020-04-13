//
// Created by Netanel Albert on 12/04/2020.
//
//#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>


int main(){

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
    } else {
        printf("father process\n");
    }

    usleep(5000000); // for me to have enough time to use pstree

    return 0;
}



