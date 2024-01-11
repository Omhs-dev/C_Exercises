/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ohamadou <ohamadou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/08 18:32:04 by ohamadou          #+#    #+#             */
/*   Updated: 2024/01/09 22:28:10 by ohamadou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int     *ft_range(int start, int end)
{
	int i;
	int len;
	int *res;

	i = 0;
	len = abs(end - start) + 1;
	res = (int *)malloc(sizeof(int) * len);
	while (i < len)
	{
		if (start < end)
		{
			res[i] = start;
			start++;
			i++;
		}
		else
		{
			res[i] = start;
			start--;
			i++;
		}
	}
	return (res);
}

#include <stdio.h>

int main()
{
	int start = 0;
	int end = -3;
	int i = 0;
	int *res = ft_range(start, end);

	while (i < abs(end - start) + 1)
	{
		printf("%d\n", res[i]);
		i++;
	}
	return (0);
}
