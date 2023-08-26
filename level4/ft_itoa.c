/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ohamadou <ohamadou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/26 19:47:01 by ohamadou          #+#    #+#             */
/*   Updated: 2023/08/26 20:54:08 by ohamadou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	len_nb(long nbr)
{
	int	i;

	i = 0;
	if (nbr == 0)
		return (1);
	if (nbr < 0)
		i++;
	while (nbr != 0)
	{
		nbr = nbr / 10;
		i++;
	}
	return (i);
}

char	*ft_itoa(int nbr)
{
	long	len;
	long	tem;
	char	*res;

	len = len_nb(nbr);
	tem = nbr;
	if (nbr < 0)
		tem *= -1;
	res = malloc(sizeof(char) * (len + 1));
	if (!res)
		return (NULL);
	res[len] = 0;
	if (tem == 0)
		res[0] = '0';
	else
	{
		while (len--, tem != 0)
		{
			res[len] = (tem % 10) + '0';
			tem = (tem - (tem % 10)) / 10;
		}
		if (nbr < 0)
			res[len] = '-';
	}
	return (res);
}
