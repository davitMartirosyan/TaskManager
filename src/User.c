#include "Core.h"
#include "User.h"
int g_uid = -1;
int uid = -1;

bool login(User* user);
User *addUser(char *uname, char *pass)
{
    static int id = 0;
    User* user = (User*)malloc(sizeof(User));
    if (!user)
        return (NULL);
    user->uid = id++;
    strcpy(user->uname, uname);
    strcpy(user->pass, pass);
    return (user);
}

void freeUsers(User *users[], size_t userTableSize)
{
    size_t i = -1;
    while (++i < userTableSize)
        free(users[i]);
}

User *findUser(User* users[], size_t userTableSize, char *uname, char *pass)
{
    size_t i = 0;
    while (i < userTableSize)
    {
        if (strcmp(users[i]->uname, uname) == 0 && \
            strcmp(users[i]->pass, pass) == 0)
                return (users[i]);
        i++;
    }
    return (NULL);
}
//