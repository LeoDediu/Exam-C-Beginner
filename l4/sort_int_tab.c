/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_int_tab.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldediu <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/19 18:11:47 by ldediu            #+#    #+#             */
/*   Updated: 2019/10/19 18:11:48 by ldediu           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// Write the following function:

// void sort_int_tab(int *tab, unsigned int size);

// It must sort (in-place) the 'tab' int array, that contains exactly 'size'
// members, in ascending order.

// Doubles must be preserved.

// Input is always coherent.

#include <stdio.h>

void sort_int_tab(int *tab, unsigned int size)
{
    int a = 0;
    int i = 0;

    while (i <= size)
    {
        
        if (tab[i] > tab[i + 1])
        {
            a = tab[i];
            tab[i] = tab[i + 1];
            tab[i + 1] = a;

        }
        // printf("%d\n", i);
        i++;
    }
    for (int k = 0; k < size; k++)
    {
        printf("%d\n", tab[k]);
    }
}

int main (void)
{
    int arr[5] = {5, 4, 1, 2, 1};
    sort_int_tab(arr, 5);
}