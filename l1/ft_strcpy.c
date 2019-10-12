#include <stdio.h>
char ft_strcpy(char *s1, char *s2)
{
    // dest = s1
    // src = s2

    int i = 0;

    while (s2[i] != '\0')
    {
        s1[i] = s2[i];
        i++;
    }
    s1[i] = '\0';
    return (*s1);
}


int main (void)
{
    char src[] = "Hello";
    char dest[100];
    ft_strcpy(dest, src);
    printf("%s\n", dest);
      
    return 0;
}