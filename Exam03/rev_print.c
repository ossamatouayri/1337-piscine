#include <unistd.h>
int ft_strlen(char *str)
{
	int i = 0;
	while(str[i])
	i++;
	return i;
}
char *ft_rev_print (char *str)
{
	int j = ft_strlen(str) -1;
	while(j >= 0)
	{
		write(1,&str[j],1);
		j--;
	}
	return str;
}
int main(void)
{
	char str[] = "boxee99";
	ft_rev_print(str);
	write(1,"\n",1);
}
