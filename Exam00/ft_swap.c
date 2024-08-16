#include <stdio.h>
void	ft_swap(int *a, int *b)
{
	int temp = *a;
	*a = *b;
	*b = temp;
}
int main()
{
	int a = 10;
	int b = 2;
	printf("a is : %d   b is : %d\n",a,b);
	ft_swap(&a,&b);
	printf("a is : %d   b is : %d\n",a,b);
}
