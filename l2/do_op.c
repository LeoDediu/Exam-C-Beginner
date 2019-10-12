#include "do_oph.h"

int doop (char *nb1, char *nb2, char *op)
{
    int n1;
    int n2;
    int res;
    n1 = atoi(nb1);
    n2 = atoi(nb2);

    if (*op == '+')
        res = n1 + n2;
    if (*op == '-')
        res = n1 - n2;
    if (*op == '*')
        res = n1 * n2;
    if (*op == '/')
        res = n1 / n2;
    if (*op == '%')
        res = n1 % n2;
    return res;
}
int main (int argc, char **argv)
{
    if (argc == 4)
    {
        printf("%d", doop(argv[1], argv[3], argv[2]));

    }
    printf("\n");
    return 0;
}
