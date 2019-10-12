#include <unistd.h>

void ft_putchar(char c)
{
    write(1, &c, 1);
}

int ft_atoi(char *c)
{
    int i = 0;
    int res = 0;
    int sign = 1;
    while (c[i] >= 9 && c[i] <= 13)
    {
        i++;
    }
    if(c[i] == ' ' )
        i++;
    if(c[i] == '+')
        i++;
    if(c[i] == '-')
    {
        sign = -1;
        i++;
    }
    while (c[i] != '\0' && c[i] >= '0' && c[i] <= '9')
    {
        res = res * 10 + c[i] - '0';
        i++;
    }
    return res;
}

void ft_putnbr (int n)
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
        write (1, &c, 1);
    }
    else 
    {
        ft_putnbr(n / 10);
        ft_putnbr(n % 10);
    }

}

int ft_isprime(int n)
{
    int i = 0;
    i = 2;
    if (n > 1)
    {
        while (i * i <= n)
        {
            if (n % i == 0)
                return 0;
            i++;
        }
        return 1;
    }
    return 0;
}


 
int main (int argc, char **argv)
{
    int num;
    int res;
    
    if (argc == 2)
    {
        res = 0;
        num = ft_atoi(argv[1]);
        while (num > 0)
        { 
            if (ft_isprime(num) == 1)
            {
                res = res + num;
            }
            num--;
        }
    ft_putnbr(res);
    }
    ft_putchar('\n');
    return 0;
}