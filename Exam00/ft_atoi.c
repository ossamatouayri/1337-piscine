#include <stdio.h>
#include <stdlib.h>
int	ft_atoi(const char *str)
{
	int i = 0;
	int count = 0;
	while(str[i] == ' ' || (str[i] >= 9 && str[i] <= 13))
	i++;
	if(str[1] == '-')
	{
		count = -1;
		i++;
	}else if(str[i] == '+')
	i++;
	int convert = 0;
	while(str[i] != '\0' && (str[i] >= '0' && str[i] <= '9'))
	{
		convert = convert * 10 + str[i] - '0';
		i++;
	}
	return(convert * count);
}
int main()
{
	char nb[]  = "-+55";
	//printf("github func :%d\n",ft_atoi(nb));
	printf("original:%d\n",atoi(nb));
	printf("my func :%d\n",ft_atoi(nb));

}
