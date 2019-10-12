#include <unistd.h>

void ft_putchar(char c){
    write (1, &c, 1);
}

int main (int argc, char **argv)
{
    int i;
    int j;
    i = 0;

    if (argc == 2)
    {
        while (argv[1][i] != '\0')
        {
            j = 0;
            if(argv[1][i] >= 'A' && argv[1][i] <= 'Z')
            {
                j = (argv[1][i] - 'A');
                while (j > 0)
                {
                    ft_putchar(argv[1][i]);
                    j--;
                }
               
            }
            
            if(argv[1][i] >= 'a' && argv[1][i] <= 'z')
            {
                j = (argv[1][i] - 'a');
                while (j > 0)
                {
                    ft_putchar(argv[1][i]);
                    j--;
                }
            }
            ft_putchar(argv[1][i]);
            i++;
        }
    }
    ft_putchar('\n');
    return (0);
}