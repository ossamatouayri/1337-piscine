#include <unistd.h>
int main()
{
	char i = 'a';
	while(i <= 'z')
	{
		if(i % 2 == 0)
		{
			i -=32;
			write(1,&i,1);
			i += 32;

		}else
		{
			write(1,&i,1);
		}
		i++;
	}
	write(1, "\n",1);
}
