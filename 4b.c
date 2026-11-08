#include <stdio.h>
#include <string.h>

int main()
{
    char t1[10], t2[10];
    char op;

    printf("data 1, data 2: ");
    scanf("%9s %9s", t1, t2);

    printf("op: ");
    scanf(" %c", &op);

    if ((strcmp(t1, "int") != 0 &&
         strcmp(t1, "float") != 0 &&
         strcmp(t1, "char") != 0) ||
        (strcmp(t2, "int") != 0 &&
         strcmp(t2, "float") != 0 &&
         strcmp(t2, "char") != 0))
    {
        printf("invalid");
    }
    else if (op == '+' || op == '-' || op == '*' || op == '/')
    {
        if (strcmp(t1, "char") == 0 || strcmp(t2, "char") == 0)
            printf("type error");
        else
            printf("valid operation");
    }
    else if (op == '=')
    {
        if (strcmp(t1, t2) == 0)
            printf("valid assignment");
        else
            printf("type error");
    }
    else
    {
        printf("invalid operation");
    }

    return 0;
}
