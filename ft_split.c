/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ohamadou <ohamadou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/11 09:32:04 by ohamadou          #+#    #+#             */
/*   Updated: 2024/01/13 19:14:57 by ohamadou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int is_delimiter(char c)
{
	return (c == ' ' || c == '\t' || c == '\n');
}

char    **ft_split(char *str)
{
	int row;
	int col;
	int i;
	char **split;

	i = 0;
	row = 0;
	split = (char **)malloc(sizeof(char *) * 256);
	if (!split)
		return (NULL);
	while (is_delimiter(str[i]))
		i++;
	while (str[i])
	{
		col = 0;
		if (!(split[row] = (char *)malloc(sizeof(char) * 4099)))
			return (NULL);
		while (!is_delimiter(str[i]))
			split[row][col++] = str[i++];
		while (is_delimiter(str[i]))
			i++;
		split[row][col] = '\0';
		row++;
	}
	split[row] = NULL;
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
