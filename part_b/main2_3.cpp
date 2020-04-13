//
// Created by Netanel Albert on 12/04/2020.
//
//#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>


int main(){

    pid_t pid = fork(); // creat child
    if(pid < 0)
        return 1;
    if(pid > 0){
        printf("Demon pid: %d\n", pid);
        //return 0;
    } else { // in demon process
        chdir("/");
        setsid();
        printf("Demon closing std io channels\n");
        fclose(stdin);
        fclose(stdout);
        fclose(stderr);

    }
    sleep(5); // for me to have enough time to use pstree
    //printf("end %d\n", pid);
    return 0;
}



