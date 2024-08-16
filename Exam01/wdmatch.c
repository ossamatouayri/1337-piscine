#include <unistd.h>
int ft_strlen(char *str)
{
	int i = 0;
	while(str[i] != '\0')
		i++;
		return(i);
}
int main(int ac, char **av)
{
	if(ac == 3)
	{
		int i = 0;
		int j = 0;
		while(av[1][i] != '\0' && av[2][j] != '\0')
		{
			if(av[1][i] == av[2][j])
				i++;
			j++;
		}
		if(i == ft_strlen(av[1]))
		{
			i = 0;
			while (av[1][i])
			{
				write(1,&av[1][i],1);
				i++;
			}
		}
	}
	write(1, "\n",1);
}
