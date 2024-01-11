/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rrange.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ohamadou <ohamadou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/08 18:39:11 by ohamadou          #+#    #+#             */
/*   Updated: 2024/01/09 22:25:41 by ohamadou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int     *ft_rrange(int start, int end)
{
	int i;
	int len;
	int *res;

	i = 0;
	len = abs(end - start) + 1;
	res = (int *)malloc(sizeof(int) * len);
	while (i < len)
		i++;
	while (i)
	{
		if (start < end)
		{
			res[i] = start;
			start++;
			i--;
		}
		else
		{
			res[i] = start;
			start--;
			i--;
		}
	}
	return (res + 1);
}

// int *ft_rrange(int start, int end)
// {
// 	int *range;
// 	int i = 0;
// 	int step = 1;
// 	int n = end - start;

// 	if (n < 0)
// 		(n *= -1);
// 	n++;

// 	range = (int *)malloc(sizeof(int) * n);
// 	if (range)
// 	{
// 		if (start < end)
// 			step = -1;
// 		while (i < n)
// 		{
// 			range[i] = end;
// 			end = end + step;
// 			i++;
// 		}
// 	}
// 	return (range);
// }

#include <stdio.h>

int main()
{
	int start = -1;
	int end = 2;
	int i = 0;
	int *res = ft_rrange(start, end);

	while (i < abs(end - start) + 1)
	{
		printf("%d\n", res[i]);
		i++;
	}
	return (0);
}