#include <stdlib.h>
#include <stdio.h>
int     *ft_range(int start, int end)
{
	int size;
	if(start <= end)
	{
		size = end - start + 1; // not dima : size = (lkbira - sghira + 1)
	}else
	size = start - end + 1;

	int *range = (int*) malloc(size * sizeof(int));
	if(range == NULL)
	return NULL;

	int index = 0;
	if(start <= end)
	{
		while(start <= end)
		{
			range[index] = start;
			start++;
			index++;
		}
	}else
	{
		while(start >= end)
		{
			range[index] = start;
			start--;
			index++;
		}
	}
	return(range);
}
/*int main()
{
	int start = -10;
	int end = -30;
	int *range = ft_range(start,end);
	int size = start - end + 1;
	int i = 0;
	while(i < size)
	{
		printf("%d, ",range[i]);
		i++;
	}
	printf("\n");
	free(range);
}*/
