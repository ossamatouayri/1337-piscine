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
	int j = ft_strlen(str);
	while(j)
	{
		write(1,&str[j - 1],1);
		j--;
	}
	write(1,"\n",1);
	return(str);
}
int main()
{
	ft_rev_print("Ossama");
}
