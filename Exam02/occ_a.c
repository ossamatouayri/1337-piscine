int occ_a(char *str)
{
	int count  = 0;
	while(*str != '\0')
	{
		if(*str == 'A')
		{
			count++;
		}
		str++;
	}
	return (count);
}
