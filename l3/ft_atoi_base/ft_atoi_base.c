int get_digit(char c, int base)
{
	int digit = -1;
	if (c >= '0' && c <= '9')
		digit = c - '0';
	else if (c >= 'a' && c <= 'f')
		digit = c + 10 - 'a';
	else if (c >= 'A' && c <= 'F')
		digit = c + 10 - 'A';
	if (digit != -1)
	{
		if (digit > base)
			digit = -1;
	}
	return digit;
}

int	ft_atoi_base(const char *str, int str_base)
{
	int i = 0;
	int digit = 0;
	int out = 0;
	int sign = 1;
	if (str[i] == '-')
	{
		sign = -1;
		i++;
	}
	while (str[i])
	{
		digit = get_digit(str[i], str_base);
		if (digit == -1)
			return 0;
		out = out * str_base;
		out += digit;
		i++;
	}
	return out * sign;
}

//-------------------------------------------------

#include <stdio.h>
int		main(void)
{
	printf("%d\n", ft_atoi_base("15690b80B", 16));
	printf("%d\n", ft_atoi_base("13", 2));
}