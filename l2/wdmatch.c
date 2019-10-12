#include <unistd.h>

void ft_putchar(char c){
    write (1, &c, 1);
}

int match(char *str1, char *str2)
{
    int i  = 0;
    int j = 0;
    int s = 0;
    while (str1[i] != '\0')
    {
        while (str2[j] != '\0')
        {
            if (str1[i] == str2[j])
            {
                s = 1;
                i++;
            }
            j++;
        }
        if (str1[i] == str2[j])
        {
            s = 1;
        }
        else 
            return 0;
    }
    if (s == 1)
        return 1;
    else 
        return 0;
                
}



int main (int argc, char **argv)
{
    int i = 0;

    if (argc == 3)
    {
        
        if(match(argv[1], argv[2]) == 1)
        {
            while (argv[1][i] != '\0')
            {
                write(1, &argv[1][i], 1);
                i++;
            }

        }

    }
    ft_putchar('\n');
    return 0;
}