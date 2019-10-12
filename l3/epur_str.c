#include <unistd.h>

void ft_putchar(char c)
{
    write (1, &c, 1);
}

int main (int argc, char **argv)
{
    int i;
    int flag = 0;
   
    if(argc == 2)
    {
        i = 0;   
        while (argv[1][i] == ' ' || argv[1][i] == '\t')
            i++;
        while (argv[1][i] != '\0')
        {
            if (argv[1][i] == ' ' || argv[1][i] == '\t')
                flag = 1;
            if (argv[1][i] != ' ' && argv[1][i] != '\t')
            {
                if (flag == 1)
                {
                    ft_putchar(' ');
                    flag = 0;
                }
                ft_putchar(argv[1][i]);
            }
            i++;
        }

    }
    ft_putchar('\n');
    return 0;

}
