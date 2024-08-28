#include <unistd.h>
int main(int ac, char **av)
{
	if(ac == 2)
	{
		int i = 0;
		while(av[1][i])
		{
			if(i % 3 == 0 && i % 5 == 0)
			{
				av[1][i] = '5';
			}
			else if(i % 3 == 0)
			{
				av[1][i] = '5';
			}
			else if(i % 5 == 0)
			{
				av[1][i] = '3';
			}
			write(1, &av[1][i], 1);
			i++;
		}
	}
	write(1, "\n", 1);
}
