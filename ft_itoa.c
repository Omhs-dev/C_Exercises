/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ohamadou <ohamadou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/15 18:34:45 by ohamadou          #+#    #+#             */
/*   Updated: 2024/01/15 19:00:57 by ohamadou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>
#include <limits.h>

int count_int(int n)
{
	int len = 0;

	if (n < 0)
		len = 1;
	while (n)
	{
		n = n / 10;
		len++;
	}
	return (len);
}

char	*ft_itoa(int nbr)
{
	unsigned int nb;
	int len;
	char *mem;

	nb = nbr;
	len = count_int(nbr);
	mem = (char *)malloc(sizeof(char) * len + 1);
	if (!mem)
		return (NULL);
	mem[len--] = '\0';
	if (nbr < 0)
		nb = -nbr;
	else
		nb = nbr;
	while (len >= 0)
	{
		mem[len] = nb % 10 + 48;
		len--;
		nb = nb / 10;
	}
	if (nbr < 0)
		mem[0] = '-';
	return (mem);
}

int main()
{
	printf("%s\n", ft_itoa(INT_MIN));
	return (0);
}
