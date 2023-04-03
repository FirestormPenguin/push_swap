#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int main(int ac, char **av)
{
    int i;
    while (ac < 2)
    {
        printf("Non abbastanza\n");
        return (0);
    }
    i = 1;
    while (i <= 4)
    {
        printf("Av%d: %s\n", i, av[i]);
        i++;
    }

    if (i > 0)
    {
        printf("End\n");
        return (0);
    }
}