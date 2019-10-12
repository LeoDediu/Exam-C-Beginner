#include <stdio.h>

char    *ft_strrev(char *str)
{
    int i = 0;
    int len = 0;
    char repo;

    while(str[len] != 0)
    {
        len++;
    }
   i = i - 1;
   if (len < 1)
   {
    return (str);
   }


   while (--len >= ++i)
    {
        repo = str[len];
        str[len] = str[i];
        str[i] = repo;
    }

    return (str);

}


int main (void)
{
    char test[] = "Hello";
    ft_strrev(test);
    printf("%s\n", test);
}