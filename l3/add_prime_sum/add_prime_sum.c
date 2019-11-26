#include <unistd.h>
#include <stdio.h>

void ft_putchar(char c)
{
    write (1, &c, 1);
}

int ft_atoi(char *s)
{
    int res = 0;
    int sign = 1;
    int i = 0;

    while (s[i] >= 9 && s[i] <= 13)
        i++;
    if (s[i] == '-' || s[i] == '+')
    {
        if (s[i] == '-')
            sign = sign * -1;
        i++;
    }
    while (s[i] != '\0' && (s[i] >= '0' && s[i] <= '9'))
    {
        res = res * 10 + s[i] - '0';
        i++;
    }
    return (res * sign);
}

void ft_putnbr(int n)
{
    char c;

    if (n < 0)
    {
        n = n * -1;
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

int ft_isprime(int n)
{
    int i = 2;

	while (i < n)
	{
		if (n % i == 0)
			return (0);
		++i;
	}
	return (1);
}

int		add_prime_sum(int n)
{
	int sum = 0;
	int i = 2;

	while (i <= n)
	{
		if (ft_isprime(i) == 1)
			sum += i;
		++i;
	}
	return (sum);
}

int		main(int argc, char **argv)
{
	int n;

	if (argc == 2 && (n = ft_atoi(argv[1])))
		ft_putnbr(add_prime_sum(n));
    else
		ft_putnbr(0);
	write(1, "\n", 1);
	return (0);
}