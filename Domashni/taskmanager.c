#include <stdio.h>
#include "processes.h"

int main() {

    while (1)
    {
            int option = 0;
            printf("\nEnter an option: ");
            scanf("%d", &option);

    if(option == 1) {
        if(processescount >= n) {
            printf("\nError. Remove one of the processes");
        }
        else {
            char process_name[30];
            printf("\nEnter the name: ");
            scanf("%s", &process_name);
            printf("%s", process_name);
            createnewprocess(process_name);
        }
    }
    else if(option == 2) {
        printf("Total proceses: %d\n", processescount);
        if(processescount > 0) {
        for(int i = 0; i < processescount; i++) {
            printf("%d ->",processes[i].ID);
            printf("%s\n", processes[i].name);
        }
        }

    }
    else if(option == 3) {
        int user_id;
        printf("\nEnter the id: ");
        scanf("%d", &user_id);
        stopprocess(user_id);
    }
    else {
        return 0;
    }
    }
    

}