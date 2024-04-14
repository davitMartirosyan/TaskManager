#include "Structs.h"
#include "User.h"
#include "Task.h"

extern int g_uid;
extern int uid;

void init(table_t **table)
{
    *table = malloc(sizeof(table_t));
    if (!*table)
        exit(EXIT_FAILURE);
    (*table)->f_names[0] = "create";
    (*table)->f_names[1] = "read";
    (*table)->f_names[2] = "update";
    (*table)->f_names[3] = "delete";
    (*table)->f_names[4] = "list";

    (*table)->fcnt[0] = createTask;
    (*table)->fcnt[1] = readTask;
    (*table)->fcnt[2] = updateTask;
    (*table)->fcnt[3] = deleteTask;
    (*table)->fcnt[4] = listTasks;
}

int main( void )
{
    table_t* table;
    User *users[10];
    users[0] = addUser("aramusayelyan", "aramusayelyan");
    users[1] = addUser("d", "d");
    init(&table);
    while (1)
    {
        if (g_uid == -1)
        {
            char *uname = readline("Username: ");
            char *pass = readline("Password: ");
            User* user = findUser(users, 2, uname, pass);
            if (user)
                g_uid = user->uid;
        }
        if (g_uid > -1)
        {
            char *cmd = readline("$: ");
            int fid = findCommand(table, cmd);
            if (fid > -1)
            {
                Allinone_t *esiminch;
                table->fcnt[fid](esiminch);
            }
        }
    }
    free(table);
    freeUsers(users, 1);
}