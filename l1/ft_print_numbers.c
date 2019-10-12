#include <unistd.h>
void ft_putchar (char c)
{
    write (1, &c, 1);
}

int main (void)
{
    char i = '0';
    while (i <= '9')
    {
        ft_putchar(i);
        i++;
    
    }


    return 0;
}