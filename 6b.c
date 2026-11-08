#include <stdio.h>

char nt[][3] = {"E", "EP", "T", "TP", "F"};
char first[5][5];
int n[5] = {0};
int visited[5] = {0};

void findFirst(int x)
{
    int i;

    if (visited[x])
        return;

    visited[x] = 1;

    if (x == 4)
    {
        first[4][n[4]++] = '(';
        first[4][n[4]++] = 'i';
    }

    else if (x == 2)
    {
        findFirst(4);

        for (i = 0; i < n[4]; i++)
            first[2][n[2]++] = first[4][i];
    }

    else if (x == 0)
    {
        findFirst(2);

        for (i = 0; i < n[2]; i++)
            first[0][n[0]++] = first[2][i];
    }

    else if (x == 1)
    {
        first[1][n[1]++] = '+';
        first[1][n[1]++] = 'e';
    }

    else if (x == 3)
    {
        first[3][n[3]++] = '*';
        first[3][n[3]++] = 'e';
    }
}

int main()
{
    int i, j;

    findFirst(4);
    findFirst(2);
    findFirst(0);
    findFirst(1);
    findFirst(3);

    for (i = 0; i < 5; i++)
    {
        printf("FIRST(%s) = { ", nt[i]);

        for (j = 0; j < n[i]; j++)
            printf("%c ", first[i][j]);

        printf("}\n");
    }

    return 0;
}
