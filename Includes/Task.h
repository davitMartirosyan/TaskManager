#ifndef TASK_H
#define TASK_H
#include "Core.h"

Allinone_t* createTask(Allinone_t *all);
Allinone_t* readTask(Allinone_t *all);
Allinone_t* updateTask(Allinone_t *all);
Allinone_t* deleteTask(Allinone_t *all);
Allinone_t* listTasks(Allinone_t *all);
char *joinString(char *s1, char ch, char *s2);
int findCommand(table_t *table, const char *cmd);
#endif