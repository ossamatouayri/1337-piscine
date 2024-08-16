#include <unistd.h>
void	ft_print_numbers(void)
{
	char i = '0';
	while(i <= '9')
	{
		write(1,&i,sizeof(i));
		i++;
	}
}
int main(void)
{
	ft_print_numbers();
}
