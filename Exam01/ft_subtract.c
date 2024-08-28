#include <stdio.h>
void	ft_subtract(int a, int *ptr)
{
	*ptr = *ptr - a;
}
int main()
{
	int ptr = 10;
	int a = 5;
	ft_subtract(a,&ptr);
	printf("ptr is :%d\n",ptr);
}
