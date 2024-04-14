#ifndef USER_H
#define USER_H
#include "Core.h"

User *addUser(char *uname, char *pass);
bool login(User* user);
void freeUsers(User *users[], size_t userTableSize);
User *findUser(User *users[], size_t userTableSize, char *uname, char *pass);
#endif