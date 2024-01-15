/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ohamadou <ohamadou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/15 22:19:19 by ohamadou          #+#    #+#             */
/*   Updated: 2024/01/15 22:24:11 by ohamadou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int     *ft_range(int start, int end)
{
	int len;
	int i;
	int *mem;

	i = 0;
	len = abs(end - start) + 1;
	mem = (int *)malloc(sizeof(int) * len);
	if (!mem)
		return (NULL);
	while (i < len)
	{
		if (start > end)
		{
			mem[i] = start;
			start++;
			i++;
		}
		else
		{
			mem[i] = start;
			start--;
			i++;
		}
	}
	return (mem);
}
