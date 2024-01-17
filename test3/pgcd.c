/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pgcd.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ohamadou <ohamadou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/16 19:01:36 by ohamadou          #+#    #+#             */
/*   Updated: 2024/01/17 19:59:50 by ohamadou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

void pgcd(char *a, char *b)
{
	int nbr1 = atoi(a);
	int nbr2 = atoi(b);

	if (nbr1 > 0 && nbr2 > 0)
	{
		while (nbr1 != nbr2)
		{
			if (nbr1 > nbr2)
				nbr1 -= nbr2;
			else
				nbr2 -= nbr1;
		}
		printf("%d", nbr1);
	}
}

int main(int argc, char **argv)
{
	if (argc == 3)
		pgcd(argv[1], argv[2]);
	printf("\n");
	return (0);
}
