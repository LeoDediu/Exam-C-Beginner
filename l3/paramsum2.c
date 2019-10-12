/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   paramsum2.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldediu <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/12 12:41:45 by ldediu            #+#    #+#             */
/*   Updated: 2019/10/12 12:41:47 by ldediu           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// Write a program that displays the number of arguments passed to it, followed by
// a newline.

// If there are no arguments, just display a 0 followed by a newline.

#include <unistd.h>
#include <stdio.h>

void ft_putchar(char c)
{
    write (1, &c, 1);
}

void ft_putnbr(int n)
{
    if (n < 0)
    {
        ft_putchar('-');
        n = n * -1;
    }
    if (n < 10)
       ft_putchar(n + '0');
    else 
    {
    ft_putnbr(n / 10);
    ft_putnbr(n % 10);
    }
}

int main (int ac, char **av)
{
    if (ac > 1)
        ft_putnbr(ac - 1);
    else 
        ft_putchar('0');
    ft_putchar('\n');
    return 0;
}
