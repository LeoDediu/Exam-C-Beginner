#include <stdlib.h>
#include <stdio.h>

int     *ft_range(int start, int end)
{
    int *arr;
	int i;
	i = 0;

	if (start >= end)
	{
		//  (0; -3)  0 -1 -2 -3
		arr = (int*)malloc(sizeof(int) * (start - end + 1));
		while (start >= end)
		{
		    arr[i] = start;
			printf("%d ", arr[i]);
			i++;
			start--;
			
		}
	}
	else
	{
        arr = (int*)malloc(sizeof(int) * (end - start + 1));
		while (start <= end)
		{
			arr[i] = start;
			printf("%d ", arr[i]);
			i++;
			start++;
			
		}
	}
	return (arr);
}

int main (void)
{
	int *a;
	a = ft_range(0 , 0);
	return 0;
}