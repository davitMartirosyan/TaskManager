#include "Core.h"
#include "Task.h"
extern int g_uid;

int findCommand(table_t *table, const char *cmd)
{
    int i = 0;
    while(i < 5)
    {
        if (strcmp(cmd, table->f_names[i]) == 0)
            return (i);
        i++;
    }
    return (-1);
}

Allinone_t* createTask(Allinone_t *all)
{
    static int id = 1;
    int fd = 0;
    char *commands[] = {"Title: ", "Description: ", "Priority: "};
    char *line = NULL;
    int prompt = 0;
    line  = joinString(line, ':', ft_itoa(id++));
    line = joinString(line, ':', ft_itoa(g_uid));
    while (prompt < 3)
    {
        char *p = readline(commands[prompt]);
        line = joinString(line, ':', p);
        prompt++;
    }
    fd = open("taskManager/taskmanager.tm", O_CREAT | O_APPEND | O_RDWR);
    if (fd < 0)
    {
        printf("Couldn't open\n");
        return (NULL);
    }
    write(fd, line, strlen(line));
    write(fd, "\n", 1);
    close(fd);
    free(line);
    return (NULL);
}

Allinone_t* readTask(Allinone_t *all)
{
    char **col;
    int fd;
    char *line = NULL;
    int id = -1;
    char *t_id = readline("Id: ");
    t_id = ft_strtrim(t_id, " ");
    if (!ft_isdigit(t_id[0]))
        return (NULL);
    id = ft_atoi(t_id);
    fd = open("taskManager/taskmanager.tm", O_RDONLY);
    if (fd < 0)
        return (NULL);
    line = get_next_line(fd);
    while (line)
    {
        col = ft_split(line, ':');
        if (ft_atoi(col[0]) == id && ft_atoi(col[1]) == g_uid)
        {
            printf("*********************\n");
            int i = -1;
            while (col[++i])
                printf("%s\n", col[i]);
            printf("*********************\n");
        }
        line = get_next_line(fd);
    }
    return (NULL);
}

Allinone_t* updateTask(Allinone_t *all)
{
    return (NULL);

}

Allinone_t* deleteTask(Allinone_t *all)
{
    return (NULL);

}

Allinone_t* listTasks(Allinone_t *all)
{
    return (NULL);

}

char *joinString(char *s1, char ch, char *s2)
{
    char *new;
    if (!s1 && s2)
        return (strdup(s2));
    else if (s1 && !s2)
        return (strdup(s1));
    else if (!s1 && !s2)
        return (strdup(""));
    int s1_len = strlen(s1);
    int s2_len = strlen(s2);   
    new = (char*)malloc(sizeof(char) * (s1_len + s2_len + 2));
    if (!new)
        return (NULL);
    int i = -1;
    int j = -1;
    while (++i < s1_len)
        new[i] = s1[i];
    new[i] = ch;
    while (++j < s2_len)
        new[++i] = s2[j];
    new[++i] = '\0';
    free(s1);
    free(s2);
    return (new);
}