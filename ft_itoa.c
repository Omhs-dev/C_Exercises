/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ohamadou <ohamadou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/11 10:52:13 by ohamadou          #+#    #+#             */
/*   Updated: 2024/01/13 16:27:28 by ohamadou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int count_int(int nbr)
{
	int i = 0;

	if (nbr <= 0)
		i = 1;
	while (nbr)
	{
		nbr = nbr / 10;
		i++;
	}
	return (i);
}

char *ft_itoa(int nbr)
{
	int len;
	unsigned int nb;
	char *mem;

	len = count_int(nbr);
	mem = (char *)malloc(sizeof(char ) * len + 1);
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

#include <stdio.h>
#include <limits.h>

int main()
{
    // int number = -2147483648;
    char *result = ft_itoa(INT_MAX);
    printf("Result: %s\n", result);

    // Don't forget to free the allocated memory
    free(result);

    return 0;
}
