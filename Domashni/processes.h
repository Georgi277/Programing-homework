#ifndef PROCESSES_H
#define PROCESSES_H

#define n 5

struct Process {
    int ID;
    char name[30];
};

extern int processescount;
extern struct Process processes[n];

int createnewprocess(char name[30]);
void stopprocess(int processid);

#endif