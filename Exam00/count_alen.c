int ft_count_alen(char *str)
{
	int i = 0;
	while(str[i] != '\0')
	{
		if(str[i] == 'a')
		{
			return(i);
		}
		i++;
	}
	return(i);
}
