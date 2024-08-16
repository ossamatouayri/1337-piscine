#include <stdio.h>
void	ft_swap(int *a, int *b)
{
	int temp = *a;*a = *b;*b = temp;
}
int main()
{
	int a = 5;
	int b = 10;
	printf("now a is :%d   b is : %d\n",a,b);
	ft_swap(&a,&b);
	printf("now a is: %d  b is : %d\n",a,b);
}
