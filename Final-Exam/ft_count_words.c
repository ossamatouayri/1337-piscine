
int is_separator(char c)
{
	if(c == ' ' || c == '\t')
	{
		return(0);
	}else
	return(1);
}

int ft_count_words(char *str)
{
	int count  = 0;
	
	while(*str)
	{
		while(*str != '\0' && !is_separator(*str))
		str++;
		if(*str != '\0')
		{
			count++;
		}
		while(*str != '\0' && is_separator(*str))
		str++;
	}
	return(count);
}
