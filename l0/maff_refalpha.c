#include <unistd.h>
void ft_putchar(char c)
{
    write(1,&c,1);
}
int main (void)
{
    char a = 'z';
    char b = 'Y';
    while (a >= 'a' && b >= 'A')
    {
        write(1,&a,1);
        write(1,&b,1);
        a = a - 2;
        b = b - 2;
    }
    ft_putchar('\n');
    return (0);
}