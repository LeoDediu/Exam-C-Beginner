#include <unistd.h>

void ft_putchar(char c)
{
    write (1, &c, 1);
}
int    ft_strcmp(char *s1, char *s2)
{
    int i = 0;

    while(s1[i] != '\0' && s2[i] != '\0' && s1[i] == s2[i])
    {
        i++;
    }
    return(s1[i] - s2[i]);
}

int main (int argc, char **argv)
{
    int i;
    int j;
    char rep[2000];

    if(argc == 3)
    {
        i = 0;
        j = 0;
        while (argv[2][j] != '\0')
        {
            if(argv[1][i] == argv[2][j])
            {
                rep[i] = argv[1][i];
                i++;
            }  
        j++;
        }
        if(!ft_strcmp(argv[1], rep))
        {
            ft_putchar('1');
        }
        else 
            ft_putchar('0');
    }
    ft_putchar('\n');
    return 0;
}

// $>./hidenp "abc" "2altrb53c.sse" | cat -e
// 1$