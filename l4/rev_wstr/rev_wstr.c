#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>

void ft_putchar(char c)
{
    write (1, &c, 1);
}

int main (int ac, char **av)
{
    int i = 0;
    int j = 0;
    if (ac == 2)
    {
        while (av[1][i] != '\0')
            i++;
        while (i >= -1)
        {
            if (av[1][i] == ' ' || av[1][i] == '\t' || i == -1)
            {
                if (j != 0)
                    ft_putchar(' ');
                j = i + 1;
                while((av[1][j] != ' ' && av[1][j] != '\t') && av[1][j] != '\0')
                {
                    ft_putchar(av[1][j]);
                    j++;
                }
            }
            i--;
        }
    }
    ft_putchar('\n');
    return 0;
}