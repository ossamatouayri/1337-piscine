#include <stdlib.h>
#include <stdio.h>
int is_separator(char c)
{
	if(c == 9 || c == 10 || c == 32)
	{
		return(1);
	}
	if(c == 0)
	{
		return(1);
	}
	return(0);
}
int lentosep(char *str)
{
	int i = 0;
	while(str[i] && !is_separator(str[i]))
		i++;
	return(i);
}
int countwords(char *str)
{
	int i = 0;
	int len = 0;
	while(str[i])
	{
		while(str[i] && is_separator(str[i]))
		i++;
		if(str[i])
		len++;
		while(str[i] && !is_separator(str[i]))
		i++;
	}
	return(len);
}
char *copywords(char *str)
{
	int i = 0;
	char *word;
	int len = lentosep(str);
	word = (char *) malloc(sizeof(char) * (len + 1));
	if(!word)
		return(0);
	while(i < len)
	{
		word[i] = str[i];
		i++;
	}
	word[i] = '\0';
	return(word);
}
char **split(char *str)
{
	int i = 0;

	int count = countwords(str);
	char **strings = malloc(sizeof(char *) * (count + 1));
	if(!strings)
		return(0);
	while(*str)
	{
		while(*str && is_separator(*str))
			str++;
		if(*str)
		{
			strings[i] = copywords(str);
			i++;
		}
		while(*str && !is_separator(*str))
			str++;
	}
	strings[i] = 0;
	return(strings);
}
int main()
{
	int i = 0;
	char str[] = "salam aya ana smit batman";
	char **strings = split(str);
	while(strings[i])
	{
		printf("%s\n",strings[i]);
		i++;
	}
}
