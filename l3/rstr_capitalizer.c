#include <unistd.h>

void ft_putchar(char c)
{
    write (1, &c, 1);
}

void capit(char *str)
{
    int i = 0;
    while (str[i] != 0)
    {
    if (str[i] >= 'A' && str[i] <= 'Z')
        str[i] = str[i] + 32;
    if ((str[i] >= 'a' && str[i] <= 'z') && (str[i + 1] == ' ' || str[i + 1] == '\t' || str[i + 1] == '\0'))
        str[i] = str[i] - 32;
    ft_putchar(str[i]);
    i++;
    }

}


int main (int argc, char **argv)
{   
    int i = 1;
    if(argc <= 1)
    {
        ft_putchar('\n');
    }
    else
    {
        while (i < argc)
        {
            capit(argv[i]);
            ft_putchar('\n');
            i++;
        }
    }
    return 0;
}
