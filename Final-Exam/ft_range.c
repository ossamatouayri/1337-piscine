#include <stdlib.h>
#include <stdio.h>
int     *ft_range(int start, int end)
{
	int size ;
	if(start <= end)
	{
		size = end - start + 1;
	}else
		size = start - end + 1;
	int *range = (int*) malloc(size * sizeof(int));
	if(range == NULL)
	{
		return NULL;
	}
	int i = 0;
	if(start <= end)
	{
		while(start <= end)
		{
			range[i] = start;
			start++;
			i++;
		}
	}else
	{
		while(start>= end)
		{
			range[i] = start;
			start--;
			i++;
		}
	}
	return(range);
}
int main()
{
	int start = 5;
	int end = 10;
	int *range = ft_range(start,end);
	int size  = end - start + 1;
	int i = 0;
	while(i < size )
	{
		printf("%d ,",range[i]);
		i++;
	}
	printf("\n");
}
