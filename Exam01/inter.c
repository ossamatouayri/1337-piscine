#include <unistd.h>
int is_inoutput(char *str, char c, int posi)
{
	int i = 0;
	while(i < posi)
	{
		if(str[i] == c)
		{
			return 0;
		}
		i++;
	}
	return 1;
}
int main(int ac, char **av)
{
	if(ac == 3)
	{
		int i = 0;
		while(av[1][i] != '\0')
		{
			int j = 0;
			while(av[2][j] != '\0')
			{
				if(av[1][i] == av[2][j])
				{
					if(is_inoutput(av[1],av[1][i],i) == 1)
					{
						write(1,&av[1][i],1);
						break;
					}
				}
				j++;
			}
			i++;
		}
		write(1,"\n",1);
	}else
	write(1,"\n",1);
}
