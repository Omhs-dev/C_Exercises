/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rrange.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ohamadou <ohamadou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/24 10:51:18 by ohamadou          #+#    #+#             */
/*   Updated: 2023/08/24 11:07:24 by ohamadou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int ft_absolute_value(int nbr)
{
	if (nbr < 0)
		return (-nbr);
	return (nbr);
}

int *ft_rrange(int start, int end)
{
	int i;
	int size;
	int *tab;

	i = 0;
	if (start > end)
		return (ft_rrange(end, start));
	size = ft_absolute_value(start - end);
	tab = (int *)malloc(sizeof(int) * size + 1);
	if (!tab)
		return (0);
	while (i < start)
	{
		tab[i] = start;
		start++;
		i++;
	}
	return (tab);
}
