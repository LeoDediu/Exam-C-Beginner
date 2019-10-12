#include <stdlib.h>
#include <stdio.h>
char    *ft_strdup(char *src)
{
int i = 0;
char *dest;

while (src[i])
{
    i++;
}
dest = (char*)malloc(sizeof(char)*(i + 1));
if(dest == NULL)
    return (NULL);
i = 0;
while (src[i])
{
    dest[i] = src[i];
    i++;
}
return dest;

}

int main (void)
{
    char a[] = "HELLO WORld!";

    printf("%s\n", ft_strdup(a));

}