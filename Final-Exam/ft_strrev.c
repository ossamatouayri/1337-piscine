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
		char temp = str[i];
		str[i] = str[j];
		str[j] = temp;
		i++;
		j--;
	}
	return (str);
}
int main(void)
{
	char str[] = "boxee99";
	printf("%s\n",ft_strrev(str));
}
