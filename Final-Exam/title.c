#include <unistd.h>
int is_print(char c)
{
	if( (c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
	{
		return(1);
	}else
	return(0);
}
int main(int ac,char **av)
{
	if(ac == 2)
	{
		int i = 0;
		int should_cap = 1;
		while(av[1][i] != '\0')
		{
			if(is_print(av[1][i]))
			{
				if(should_cap && av[1][i] >= 'a' && av[1][i] <= 'z')
				{
					av[1][i] -= 32;
					write(1, &av[1][i], 1);
					should_cap  = 0;
				}else if(!should_cap && av[1][i] >= 'A'&& av[1][i] <= 'Z')
				{
					av[1][i] += 32;
					write(1, &av[1][i], 1);
				}else
				write(1, &av[1][i], 1);
				should_cap = 0;
			}else
			{
				write(1,&av[1][i], 1);
				should_cap = 1;
			}
			i++;
		}
	}
	write(1,"\n", 1);
}
