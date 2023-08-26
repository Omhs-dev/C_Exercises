/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ohamadou <ohamadou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/25 18:46:13 by ohamadou          #+#    #+#             */
/*   Updated: 2023/08/26 17:25:53 by ohamadou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int is_delimiter(char c)
{
	return (c == ' ' || c == '\n' || c == '\t');
}

int count_word(char *str)
{
	int i;
	int count;

	i = 0;
	count = 0;
	while (str[i])
	{
		if (!is_delimiter(*str))
		{
			i++;
			count++;
		}
		else
			i++;
	}
	return (count);
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

char **ft_split(char *str)
{
	int i;
	char **split;

	i = 0;
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

int	main(void)
{
	int		idx;
	char	**tab;

	idx = 0;
	tab = ft_split("The prophecy is true");
	while (idx < 4)
	{
		printf("String %d : %s\n", idx, tab[idx]);
		idx++;
	}
	return (0);
}