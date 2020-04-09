# מערכות הפעלה

# 1 מטלה

## compiler, shared libraries and processes

## Part A (50%) – compilation and libraries

```
Intro : when we write a “normal” C application, we have all the source code files.
We compile and link them to a single executable file.
```
```
We can also compile our code to a library that can be included to other projects statically or
dynamically.
```
```
In this task you are requested to produce a simple C executable, and a static/shared library
that can be used by this executable. You are also requested to provide a Make file, that will
help to utilize each of the sub tasks.
```
```
Subtask 1
1.1 write a “hello Ariel” program,in a separate file named “hello_Ariel” file (c and
h).
1.2 write a short main “main1_1” that will include “hello_Ariel”, and use it.
1.3 write a make file to compile the code.
- For this subtask you should supply the source codes and the make file.
```
```
Subtask 2
2.1 compile “hello_ariel” as a static library (.a) library
2.2 write a short main “main1_2” that will use this library
2.3 compile to a single executable and update the make file
- For this subtask you should supply the source codes and the make file.
```
```
Subtask 3
3.1 compile the lib in a shared library
3.2 write a short main “main1_3”, that will load the lib above in runtime (dynamic
link (.so)).
3.3 compile the main and alter the make file.
- For this subtask you should supply the source codes and the make file.
```
```
Subtask 4
4.1 use ltrace + strace to show which system calls and shared objects are used while
running the code from subtast 3. Save the output of ltrace and strace in a text file.
4.2 alter the make file to have default build, and clean options
- For this subtask you should supply the text output file and the make file.
```

## Part B (50%) – Processes

```
You are requested to implement a launching app, that will start a few processes.
Subtask 1
Start 2 processes as nested childs of the main app.
Like this: App -> process1 -> process 2.
```
```
Subtask 2
Start 2 processes with the same parent id (like threads).
Like this: 3*App (main + 2 childes)
```
```
Subtask 3
Start a daemon process
```
```
Subtask 4
Modify your app, to have all the above subtasks together.
Show the relevant processes tree that will reflect the tasks result.
```
## Submission guidelines:

1. Create two folders named part_a and part_b for the two part of the assignment.
2. Inside each folder create folders for each subtask with the number of the subtask and copy
    the relevant files into this folder.
3. Compress everything to a zip file and name it with the i.d of the students.
4. Upload the compressed file to the moodle.


