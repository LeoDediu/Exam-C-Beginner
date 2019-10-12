#include <stdio.h>

int		max(int* tab, unsigned int len)
{
    unsigned int i = 1;
    int res = 0;
    while (i < len)
    {
        if (tab[i] > tab[i - 1])
        {
            res = tab[i];
        }
        i++;
    }
    return res;
}

int main (void)
{
    int x[] = {10, 20, 30, -5, 100, 50, -50};
    printf("%d\n", max(x, 7));
}