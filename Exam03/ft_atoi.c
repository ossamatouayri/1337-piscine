#include <stdio.h>
#include <stdlib.h>
int	ft_atoi(const char *str)
{
	int i = 0;
	int sign = 1;
	while(str[i] == ' ' || (str[i] >= 9 && str[i] <= 13))
	i++;
	if(str[i] == '-')
	{
		sign = -1;
		i++;
	}else if(str[i] == '+')
	{
		i++;
	}
	int convert = 0;
	while(str[i] != '\0' && (str[i] >= '0' && str[i] <= '9'))
	{
		convert = convert * 10 + str[i] - '0';
		i++;
	}
	return(convert * sign);
}
int main(void)
{
	char str[] = "\n\r99++";
	printf("original is : %d\n",atoi(str));
	printf("my func is : %d\n",ft_atoi(str));
}
