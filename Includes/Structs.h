#ifndef STRUCTS_H
#define STRUCTS_H
#include "Core.h"
typedef struct Allinone_t  Allinone_t;
typedef Allinone_t* (*fn)(Allinone_t *);

typedef enum Status
{
    TODO,               // 0
    IMPLEMENTATION,     // 1
    REVIEW,             // 2
    SOLVED              // 3
}Status;

typedef enum Priority
{
    LOW,                // 0 
    MEDIUM,             // 1
    HIGH                // 2
}Priority;

typedef struct User
{
    int uid;
    char uname[32];
    char pass[32];
}User;

typedef struct Task
{
    int id;
    int uid;
    char *title;
    char *description;
    Status task_status;
    Priority task_priority;
    struct Task* next;
    struct Task* prev;
}Task;


typedef struct TaskList
{
    Task* head;
    Task* tail;
}TaskList;


typedef struct table_t
{
    char *f_names[5];
    fn fcnt[5];
}table_t;

typedef struct Allinone_t
{
    int id;
    int u_id;
    Task *task;
}Allinone_t;

// createTask
// readTask
// updateTask
// deleteTask
// listTask
#endif