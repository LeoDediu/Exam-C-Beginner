#include <stdio.h>
#include <unistd.h>

void ft_putchar (char c)
{
    write (1, &c, 1);
}

int main (int ac, char **av)
{
    int i = 0;
    int flag = 0;

    if (ac == 2)
    {
        while (av[1][i] != '\0' && (av[1][i] == ' ' || av[1][i] == '\t'))
                i++;
        while (av[1][i] != '\0')
        {
            if (av[1][i] == ' ' || av[1][i] == '\t')
                flag = 1;
            if (av[1][i] != ' ' && av[1][i] != '\t')
            {
                if (flag == 1)
                {
                    ft_putchar(' ');
                    flag = 0;
                }
                ft_putchar(av[1][i]);
            }
            i++;
        }
    }
    ft_putchar('\n');
    return 0;
}