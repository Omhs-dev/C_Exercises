/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rrange.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ohamadou <ohamadou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/15 22:25:28 by ohamadou          #+#    #+#             */
/*   Updated: 2024/01/16 14:49:33 by ohamadou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int     *ft_rrange(int start, int end)
{
	int len;
	int i;
	int *mem;

	i = 0;
	len = abs(end - start) + 1;
	mem = (int *)malloc(sizeof(int) * len);
	// if (!mem)
	// 	return (NULL);
	while (i < len)
		i++;
	while (i)
	{
		if (start < end)
		{
			mem[i] = start;
			start++;
			i--;
		}
		else
		{
			mem[i] = start;
			start--;
			i--;
		}
	}
	return (mem + 1);
}

#include <stdio.h>

int main()
{
	int start = 1;
	int end = 3;
	int i = 0;
	int *res = ft_rrange(start, end);

	while (i < abs(end - start) + 1)
	{
		printf("%d\n", res[i]);
		i++;
	}
	return (0);
}