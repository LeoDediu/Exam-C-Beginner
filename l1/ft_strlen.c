#include <stdio.h>
int ft_strlen(char *str)
{
    int i = 0;
    while (str[i] != '\0')
    {
        i++;
    }
    return (i);
}

int main (void)
{
    int a;
    a = ft_strlen("Hello");
    printf("%d\n", a);
}