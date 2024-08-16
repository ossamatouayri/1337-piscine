/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ostouayr <ostouayr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/17 09:46:34 by ostouayr          #+#    #+#             */
/*   Updated: 2024/07/17 17:44:54 by ostouayr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	checksep(char c, char *charset)
{
	int	i;

	i = 0;
	while (charset[i])
	{
		if (c == charset[i])
		{
			return (1);
		}
		i++;
	}
	return (0);
}

int	count_words(char *str, char *charset)
{
	int	i;
	int	len;

	i = 0;
	len = 0;
	while (str[i] != '\0')
	{
		while (str[i] != '\0' && checksep(str[i], charset))
			i++;
		if (str[i] != '\0')
		{
			len++;
		}
		while (str[i] != '\0' && !checksep(str[i], charset))
			i++;
	}
	return (len);
}

int	lentosep(char *str, char *charset)
{
	int	i;

	i = 0;
	while (str[i] != '\0' && !checksep(str[i], charset))
	{
		i++;
	}
	return (i);
}

char	*copy_word(char *str, char *charset)
{
	int		i;
	int		len;
	char	*word;

	i = 0;
	len = lentosep(str, charset);
	word = (char *)malloc(sizeof(char) * (len + 1));
	if (!word)
		return (NULL);
	while (i < len)
	{
		word[i] = str[i];
		i++;
	}
	word[i] = '\0';
	return (word);
}

char	**ft_split(char *str, char *charset)
{
	int		i;
	char	**result;
	int		len;
	int		j;

	i = 0;
	j = 0;
	len = count_words(str, charset);
	result = (char **)malloc(sizeof(char *) * (len + 1));
	if (!result)
		return (0);
	while (*str != '\0')
	{
		while (*str != '\0' && checksep(*str, charset))
			str++;
		if (*str != '\0')
		{
			result[j] = copy_word(str, charset);
			j++;
		}
		while (*str != '\0' && !checksep(*str, charset))
			str++;
	}
	result[j] = 0;
	return (result);
}
