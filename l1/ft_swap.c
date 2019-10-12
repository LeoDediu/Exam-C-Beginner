#include <stdio.h>
void	ft_swap(int *a, int *b)
{
    int c;

    c = *a;
    *a = *b;
    *b = c;
}


int main (void)
{
    int a = 10;
    int b = 20;
    ft_swap(&a, &b);
    printf("%d\n", a);
}