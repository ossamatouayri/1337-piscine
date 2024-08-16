#include <stdio.h>
#include <stdlib.h>
int     *ft_range(int start, int end)
{
	int size  = 0;
	if(start >= end)
	{
		size = start - end + 1;
 	}else
	{
		size = end - start + 1;
	}
	int *range = (int*) malloc(size *sizeof(int));
	if(range == NULL)
	{
		return NULL;
	}
	int i = 0;
	if(start >= end)
	{
		while(start >= end)
		{
			range[i] =  start;
			start--;
			i++;
		}
	}else
	{
		while(start <= end)
		{
			range[i]= start;
			start++;
			i++;
		}
	}
	return(range);
}
int main()
{
	int start = 1;
	int end  = 1;
	int size = end - start + 1;
	int *range = ft_range(start,end);
	int i = 0;
	while( i < size)
	{
		printf("%d, ",range[i]);
		i++;
	}
	printf("\n");
	free(range);
}
