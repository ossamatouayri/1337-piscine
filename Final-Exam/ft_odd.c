#include <unistd.h>
int main(int ac, char **av )
{
	if(ac == 2)
	{
		int i = 0;
		while (av[1][i] != '\0')
		{
			if(i % 2 == 1)
			{
				write(1, &av[1][i], 1);
			}
			i++;
		}
	}
	write(1, "\n", 1);
}
