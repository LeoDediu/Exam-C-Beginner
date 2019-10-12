#include <stdio.h>

unsigned int lcm(unsigned int a, unsigned int b)
{
    unsigned int i = 1;
    unsigned int j;
    unsigned int res1;
    unsigned int res2;

    while (i <= b)
    {
        res1 = a * i;
        j = 1;
        while (j <= a)
        {
            res2 = b * j;     
            if (res1 == res2)
            {
                return(res1);
            }
            j++;
        }
        i++;
    }
return 0;
}

int main (void)
{
    unsigned int x;
    x = lcm(6, 10);
    printf("%d \n", x);
    return 0;
}