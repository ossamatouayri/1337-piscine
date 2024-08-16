#include <unistd.h>
int ft_strlen(char *str)
{
	int i = 0;
	while(str[i] != '\0')
	i++;
	return(i);
}
char *ft_rev_print (char *str)
{
	int i = 0;
	int j = ft_strlen(str) -1;
	while(j >= i)
	{
		write(1,&str[j],1);
		j--;
	}
	return(str);
}
int main()
{
	char str[] = "amassuO";
	ft_rev_print(str);
}
