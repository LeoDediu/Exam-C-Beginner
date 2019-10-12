#include <stdio.h>
#include <stdlib.h>

int	ft_atoi(const char *str)
{
    int i;
    int answ;
    char sign;

    i = 0;
    sign = 1;
    answ = 0;

    
    while (str[i] >= 9 && str[i] <= 13)
    {
        i++;
    }
    if (str[i] == ' ')
        i++;
    if (str[i] == '+')
        i++;
    if (str[i] == '-')
    {
        sign = -1;
        i++;
    }
    while (str[i] != '\0' && str[i] >= '0' && str[i] <= '9')
    {
        answ = answ * 10 + str[i] - '0';
        i++;
    }
    return answ;
  
}

int main (void)
{
    char a[] = "1a23a";
    printf("%d\n", ft_atoi(a));
    printf("%d\n", atoi(a));
    return 0;
}
