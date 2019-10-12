#include <unistd.h>

int ft_atoi(char *s)
{
    int i = 0;
    int sign = 1;
    int res = 0;
    
    while (s[i] == ' ' || s[i] == '\n' || s[i] == '\t' || s[i] == '\r' || s[i] == '\v' || s[i] == '\f')
        i++;
    if (s[i] == '-' || s[i] == '+')
    {
        if(s[i] == '-')
        {
            sign = -1;
        }
        i++;
    }
    while (s && (s[i] >= '0' && s[i] <= '9'))
    {
        res = res * 10 + s[i] - '0';
        i++;
    }
    return res * sign;
}

void print_hex(int n)
{
    char *str = "0123456789abcdef";

    if (n == 0)
		write (1, "0", 1);
	if (n >= 16)
        print_hex(n / 16);
    write(1, &str[n % 16], 1);
}

int main (int ac, char **av)
{
    if (ac == 2)
    {
        print_hex(ft_atoi(av[1]));
    }
    write(1, "\n", 1);
    return 0;
}