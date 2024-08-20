#include <unistd.h>
int main(int ac, char **av)
{
	if(ac > 1)
	{
		int i = ac -1;
		int j = 0;
		while(av[i][j] != '\0')
		{
			write(1,&av[i][j],1);
			j++;
		}
	}
	write(1,"\n",1);
}
