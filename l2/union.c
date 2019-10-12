#include <unistd.h>

void ft_putchar(char c){
    write (1, &c, 1);
}


int check(char *str, char lett, int pos)
{
    while(pos--)
    {
        if(str[pos] == lett)
        {
            return 0;
        }
        
    }
    return 1;
}

int main (int argc, char **argv)
{
    int i;
    int j;
    int l;
    i = 0;
    j = 0;
    if(argc == 3)
    {
        while(argv[1][i] != '\0')
        {
            if(check(argv[1], argv[1][i], i) == 1)
            {
                ft_putchar(argv[1][i]);
            }
            i++;
        }
        l = i;
        while(argv[2][j] != '\0')
        {
            if(check(argv[2], argv[2][j], j) == 1)
            {
                if(check(argv[1], argv[2][j], l) == 1)
                    {
                        ft_putchar(argv[2][j]);
                        
                    }
               
            }
            j++;
        }
        

    }
    ft_putchar('\n');
    return 0;
}