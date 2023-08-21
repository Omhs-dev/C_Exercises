/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ohamadou <ohamadou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/21 15:57:08 by ohamadou          #+#    #+#             */
/*   Updated: 2023/08/21 17:37:00 by ohamadou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

static int	count_word(char *str, char dlm)
{
	int	i;
	int	count;

	i = 0;
	count = 0;
	while (str[i])
	{
		while (str[i] == dlm)
			i++;
		if (str[i])
			count++;
		while (str[i] && str[i] != dlm)
			i++;
	}
	return (count);
}

static char	*get_word(char *str, size_t n)
{
	char	*str1;
	size_t	i;

	i = 0;
	str1 = malloc(sizeof(char) * n + 1);
	if (str == (NULL))
		return (NULL);
	while (str[i] && i < n)
	{
		str1[i] = str[i];
		i++;
	}
	str[i] = '\0';
	return (str);
}

char	**ft_split(char *str, char c)
{
	char	**str1;
	int		i;
	int		j;
	int		l;

	i = 0;
	l = 0;
	str1 = malloc(sizeof(char *) * (count_word(str, c) + 1));
	if (!(str))
		return (NULL);
	while (str1[i] != NULL)
	{
		while (str[i] != '\0')
		{
			while (str[i] == c)
				i++;
			j = i;
			while (str[i] && str[i] != c)
				i++;
			if (i > j)
			{
				str1[l] = get_word(str + j, i - j);
				l++;
			}
		}
	}
	str1[l] = NULL;
	return (str1);
}

// int		main(void)
// {
// 	int i = 0;
// 	char **tab;
		
// 	tab = ft_split("bonjour je m'appel Arthur", ' ');
// 	printf("string %d : %s\n", i, *tab);
// 	return (0);
// }