#include <stdio.h>

int is_power_of_2(unsigned int n)
{
    return (n != 0) && ((n & (n - 1)) == 0);
}

int main (void)
{
    printf ("%d\n", is_power_of_2(8));
    printf ("%d\n", is_power_of_2(128));
    printf ("%d\n", is_power_of_2(122));
    printf ("%d\n", is_power_of_2(2048));
}