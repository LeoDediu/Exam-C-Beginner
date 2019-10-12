#include <unistd.h>

void ft_putchar(char c)
{
    write (1, &c, 1);
}

void ft_putnbr (int n)
{
    char c;
    if (n < 0)
    {
        ft_putchar('-');
    }
    if (n < 10)
    {
        c = n + '0';
        ft_putchar(c);
    }
    if (n > 10)
    {
        ft_putnbr(n / 10);
        ft_putnbr(n % 10);
    }
}

int ft_atoi(char *c)
{
    int i = 0;
    int res = 0;
    int sign = 1;

    if (c[i] >= 9 && c[i] <= 13)
        i++;
    if (c[i] == ' ')
        i++;
    if (c[i] == '-')
        sign = -1;
    if (c[i] == '+' || c[i] == '-')
        i++;
    while (c[i] >= '0' && c[i] <= '9' && c[i] != '\0')
    {    
        res = res * 10 + c[i] - '0';
        i++;
    }
    return res * sign;
}

int main (int argc, char **argv)
{
    int i = 1;

    if(argc == 2)
    {
        while (i < 10)
        {
            ft_putnbr(i);
            write(1, " x ", 3);
            ft_putnbr(ft_atoi(argv[1]));
            write(1, " = ", 3);
            ft_putnbr(ft_atoi(argv[1]) * i);
            ft_putchar('\n');
            i++;
        }
    }
    else 
    {
        ft_putchar('\n');
    }

    return 0;   
}