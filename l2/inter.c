#include <unistd.h>

void ft_putchar(char c){
    write (1, &c, 1);
}

int check (char *st, char c, int loc)
{
    
    if (loc <= 0)
        return 0;
    loc = loc - 1;
    while(loc >= 0)
    {
        if (st[loc] == c)
            return 1;
        loc--;
    }
    return 0;
}


int main (int argc, char **argv)
{
    int i = 0;
    int j;

    if (argc == 3)
    {
        while (argv[1][i] != '\0')
        {
            j = 0;
            while (argv[2][j] != '\0')
            {
                if (argv[1][i] == argv[2][j])
                {
                    if (check(argv[1], argv[1][i], i) == 0)
                    {
                        ft_putchar(argv[1][i]);
                        break;
                    }
                }
                j++;     
            }
            i++;               
        }
    }
    ft_putchar('\n');
    return 0;
}
