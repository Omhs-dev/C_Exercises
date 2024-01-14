/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fprime.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ohamadou <ohamadou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/13 17:49:34 by ohamadou          #+#    #+#             */
/*   Updated: 2024/01/13 18:52:13 by ohamadou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

void fprime(int nbr)
{
	int i = 2;

	if (nbr == 1)
	{
		printf("1");
		return ;
	}
	while (nbr >= i)
	{
		if (nbr % i == 0)
		{
			printf("%d", i);
			if (nbr != i)
				printf("*");
			nbr = nbr / i;
			i--;
		}
		i++;
	}
}

int main(int argc, char **argv)
{
	if (argc == 2)
		fprime(atoi(argv[1]));
	printf("\n");
	return (0);
}
