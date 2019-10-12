#include <unistd.h>
#include <stdio.h>

void ft_putchar(char c)
{
    write (1, &c, 1);
}

void ft_putnbr(int n)
{
    char c;

    if (n < 0)
    {
        n = -1 * n;
        write(1, "-", 1);
    }
    if (n < 10)
    {
        c = n + '0';
        write(1, &c, 1);
    }
    else
    {
        ft_putnbr(n / 10);
        ft_putnbr(n % 10);
    }
}

int main (int argc, char **argv)
{
    if (argc > 1 && argv[1] != 0)
    {
        ft_putnbr(argc - 1);
        
       // printf("\n%s",argv[1]);
    }
    else {
        ft_putchar('0');
    }
    
    ft_putchar('\n');
    return 0;
}