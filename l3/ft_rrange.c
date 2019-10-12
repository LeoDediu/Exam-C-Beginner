#include <stdlib.h>
#include <stdio.h>

int     *ft_rrange(int start, int end)
{
    int *arr;
	int i;
	i = 0;

// (-3;0) (0;0)  0 -1 -2 -3
	if (start <= end)
	{
		arr = (int*)malloc(sizeof(int) * (end - start + 1));
		while (start <= end)
		{
			arr[i] = end;
			printf("%d ", arr[i]);
			i++;
			end--;
		}
	}
// (3;0)   0 1 2 3
	else
	{
        arr = (int*)malloc(sizeof(int) * (start - end + 1));
		while (start >= end)
		{
			arr[i] = end;
			printf("%d ", arr[i]);
			i++;
			end++;
		}
	}
	return (arr);
}

int main (void)
{
	int *a;
	a = ft_rrange(0 , 10);
	return 0;
}