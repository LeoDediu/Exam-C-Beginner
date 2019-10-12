/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   hidenp2.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldediu <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/12 12:02:08 by ldediu            #+#    #+#             */
/*   Updated: 2019/10/12 12:02:09 by ldediu           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

void ft_putchar (char c)
{
    write (1, &c, 1);
}

// Write a program named hidenp that takes two strings and displays 1
// followed by a newline if the first string is hidden in the second one,
// otherwise displays 0 followed by a newline.

// Let s1 and s2 be strings. We say that s1 is hidden in s2 if it's possible to
// find each character from s1 in s2, in the same order as they appear in s1.
// Also, the empty string is hidden in any string.

int ft_strcmp (char *s1, char *s2)
{
    int i = 0;

    while (s1[i] != '\0' && s2[i] != '\0' && s1[i] == s2[i])
        i++;
    return (s1[i] - s2[i]);
}

int main (int ac, char **av)
{
    int i = 0;
    int j = 0;
    char resstr[2000];
    int res;

    if (ac == 3)
    {
        while (av[2][j] != '\0')
        {
            if (av[1][i] == av[2][j])
            {
                resstr[i] = av[1][i];
                i++;
            }
            j++;
        }

    res = ft_strcmp(av[1], resstr);
    if (res == 0)
        ft_putchar('1');
    else 
        ft_putchar('0');
    }
    // char *c = "hello1";
    // char *c2 = "hello11";
    // int res = ft_strcmp(c, c2);
    // printf("%d \n", res);
    ft_putchar('\n');
    return 0;
}