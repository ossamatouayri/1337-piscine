#include <stdlib.h>
#include <stdio.h>
int *ft_rrange(int start, int end)
{
	int size;
	long dep = start;
	long fin = end;
	if(dep >= fin)
	{
		size  = dep - fin + 1;
	}else
	size  = fin - dep + 1;
	int *rrange = (int *) malloc(size * sizeof(int));
	if(!rrange)
	{
		return(NULL);
	}
	int i = 0;
	if(dep >= fin)
	{
		while(dep >= fin)
		{
			rrange[i] = fin;
			fin++;
			i++;
		}
	}else if(fin >= dep)
	{
		while(fin >= dep)
		{
			rrange[i] = fin;
			fin--;
			i++;
		}
	}
	return(rrange);
}
int main()
{
	int i = 0;
	int size  = 0;
	int start = 2147483647;
	int end = 2147483647;
	int *rrange = ft_rrange(start,end);
	if(start >= end)
	{
		size = start - end + 1;
	}else if(end >= start)
	{
		size = end - start + 1;
	}
	while(i < size)
	{
		printf("%d, ",rrange[i]);
		i++;
	}
	printf("\n");
}
