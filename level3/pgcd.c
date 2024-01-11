/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pgcd.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ohamadou <ohamadou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/08 19:42:30 by ohamadou          #+#    #+#             */
/*   Updated: 2024/01/10 14:06:33 by ohamadou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

void ft_pgcd(char *n1, char *n2)
{
	int nbr1;
	int nbr2;

	nbr1 = 0;
	nbr2 = 0;
	if ((nbr1 = atoi(n1)) > 0 && (nbr2 = atoi(n2)) > 0)
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
		ft_pgcd(argv[1], argv[2]);
	printf("\n");
	return (0);
}
