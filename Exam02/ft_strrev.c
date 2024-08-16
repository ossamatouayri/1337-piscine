#include <stdio.h>
int ft_strlen(char *str)
{
	int i = 0;
	while(str[i])
	i++;
	return i;
}
char    *ft_strrev(char *str)
{
	int i = 0;
	int j = ft_strlen(str) -1;
	while(i < j)
	{
		char temp = str[j];
		str[j] = str[i];
		str[i] = temp;
		i++;
		j--;
	}
	return(str);
}
int main()
{
	char str[] = "amassO";
	printf("%s\n",ft_strrev(str));
}
