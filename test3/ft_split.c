/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ohamadou <ohamadou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/15 18:06:00 by ohamadou          #+#    #+#             */
/*   Updated: 2024/01/15 18:28:08 by ohamadou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int is_delimiter(char c)
{
	return (c == ' ' || c == '\t' || c == '\n');
}

int count_word(char *str)
{
	int i = 0;
	int length = 0;

	while (str[i])
	{
		if (str[i] && !is_delimiter(str[i]))
		{
			i++;
			length++;
		}
		i++;
	}
	return (length);
}

char *get_word(char *str)
{
	int i;
	char *word;

	i = 0;
	while (str[i] && !is_delimiter(str[i]))
		i++;
	word = (char *)malloc(sizeof(char) * i + 1);
	if (!word)
		return (NULL);
	i = 0;
	while (str[i] && !is_delimiter(str[i]))
	{
		word[i] = str[i];
		i++;
	}
	word[i] = '\0';
	return (word);
}

char    **ft_split(char *str)
{
	int i = 0;
	char **split;

	split = (char **)malloc(sizeof(char *) * count_word(str) + 1);
	if (!split)
		return (NULL);
	while (*str)
	{
		while (*str && is_delimiter(*str))
			str++;
		if (*str && !is_delimiter(*str))
		{
			split[i] = get_word(str);
			i++;
		}
		while (*str && !is_delimiter(*str))
			str++;
	}
	split[i] = NULL;
	return (split);
}

#include <stdio.h>

int main()
{
	int i = 0;
	char **str = ft_split("this is the line to split");

	while (i < 6)
	{
		printf("word %d: %s\n", i, str[i]);
		i++;
	}
	return (0);
}
