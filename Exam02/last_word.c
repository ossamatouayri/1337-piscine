#include <unistd.h>
int ft_strlen(char *str)
{
	int i = 0;
	while(str[i])
	i++;
	return(i);
}
int main(int ac, char **av)
{
	if(ac == 2)
	{
		int j = ft_strlen(av[1]) -1;
		while(av[1][j] == ' ' || av[1][j] == '\t')
		j--;
		while(av[1][j] != ' ' && av[1][j] != '\t')
		j--;
		j++;
		while(av[1][j] != '\0' && (av[1][j] != ' ' && av[1][j] != '\t'))
		{
			write(1,&av[1][j],1);
			j++;
		}
	}
	write(1,"\n",1);
}
