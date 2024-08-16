#include <stdio.h>
int ft_strlen(char *str)
{
	int i = 0;
	while(str[i] != '\0')
	{
		i++;
	}
	return(i);
}
char    *ft_strrev(char *str)
{
	int i = 0;
	int j = ft_strlen(str) -1;
	while(i < j)
	{
		char swap = str[i];
		str[i] = str[j];
		str[j] = swap;
		i++;
		j--;
	}
	return(str);
}
int main()
{
	char str[] = "amassuO";
	printf("%s\n",ft_strrev(str));
}
