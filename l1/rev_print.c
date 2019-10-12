#include <unistd.h>

void ft_putchar(char c){
    write (1, &c, 1);
}


int main (int argc, char **argv)
{
    int i = 0;

    if (argc == 2)
    {
        while (argv[1][i] != '\0')
        {
            i++;
        }    
        while (i > 0)
        {
            i--;
            ft_putchar(argv[1][i]);        
        }
        i = i + 2;
    }
    ft_putchar('\n');
    return 0;
}