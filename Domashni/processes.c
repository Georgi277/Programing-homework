#include "processes.h"
#include <string.h>

struct Process processes[n];
int processescount = 0;

static int nextprocessid() {
    static int id = 0;
    id++;
    if (id <= 0) {
        return 0;
    } else {
        return id;
    }
}

int createnewprocess(char name[30]) {
    int next_processed_id = nextprocessid();
    if (next_processed_id != 0) {
        processes[processescount].ID = next_processed_id;
        strncpy(processes[processescount].name, name);
        processescount++;
        return next_processed_id;
    } else {
        return 0;
    }
}

void stopprocess(int processid) {
    for (int i = 0; i < n; i++) {
        if (processes[i].ID == processid) {
            for (int j = i; j < n - 1; j++) {
                processes[j].ID = processes[j + 1].ID;
                strncpy(processes[j].name, processes[j + 1].name);
            }
            processescount--;
            break;
        }
    }
}
