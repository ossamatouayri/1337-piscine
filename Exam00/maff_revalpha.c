#include <unistd.h>
int main()
{
	char i = 'z';
	while(i >= 'a')
	{
		if(i % 2 == 1)
		{
			i -=32;
			write(1,&i,1);
			i += 32;
		}else
		write(1,&i,1);
		i--;
	}
	write(1,"\n",1);
}
