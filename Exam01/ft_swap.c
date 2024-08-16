#include <stdio.h>
void	ft_swap(int *a, int *b)
{
	int temp = *a;*a = *b;*b = temp;
}
int main()
{
	int a = 6;
	int b =  7;
	ft_swap(&a,&b);
	printf("a is :%d   b is: %d\n",a,b);
}
