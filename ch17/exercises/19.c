#include <stdio.h>
#include <string.h>

void f();
struct
{
    char *cmd_name;
    void (*cmd_pointer)(void);
} file_cmd[] = {{"new", f}};

void f()
{
    printf("NEW");
}

void run_cmd(char *str)
{
    int i;
    for (i = 0; i < sizeof(file_cmd) / sizeof(file_cmd[0]); i++)
        if (strcmp(str, file_cmd[i].cmd_name) == 0)
        {
            (*(file_cmd[i].cmd_pointer))();
            return;
        }
}

int main()
{
    run_cmd("new");
    return 0;
}