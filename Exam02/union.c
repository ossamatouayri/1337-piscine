#include <unistd.h>
int ft_isinoutput(char *str,char c, int posi)
{
	int i = 0;
	while(i < posi)
	{
		if(str[i] == c)
		{
			return(0);
		}
		i++;
	}
	return(1);
}
int main(int ac, char **av)
{
	if(ac == 3)
	{
		int i = 0;
		while(av[1][i] != '\0')
		{
			if(ft_isinoutput(av[1],av[1][i],i) == 1)
			{
				write(1,&av[1][i],1);
			}
			i++;
		}
		int j = 0;
		while (av[2][j] != '\0')
		{
			if(ft_isinoutput(av[2],av[2][j],j) == 1 && ft_isinoutput(av[1],av[2][j], i) == 1)
			{
				write(1,&av[2][j],1);
			}
			j++;
		}
	}
	write(1,"\n",1);
}
