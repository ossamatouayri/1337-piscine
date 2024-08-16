#include <unistd.h>
int main()
{
	char c = '9';
	while (c >= '0')
	{
		write(1,&c,1);
		c--;
	}
	write(1,"\n",1);
}
