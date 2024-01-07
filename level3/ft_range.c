/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ohamadou <ohamadou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/04 06:20:45 by ohamadou          #+#    #+#             */
/*   Updated: 2024/01/04 06:32:45 by ohamadou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int     *ft_range(int start, int end)
{
	int *range;
	int i;
	
	if (start > end)
		i = (start - end) + 1;
	else
		i = (end - start) + 1;
	range = (int *)malloc(sizeof(int) * i);
	while (i)
	{
		range[i--] = start;
		start -= (start > end) ? (-1) : (1);
	}
	range[i] = start;
	return (range);
}