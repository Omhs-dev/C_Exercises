/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pgcd.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ohamadou <ohamadou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/04 07:20:08 by ohamadou          #+#    #+#             */
/*   Updated: 2024/01/04 07:25:49 by ohamadou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

void ft_pgcd(int nbr_1, int nbr_2)
{
	int div;
	int pgcd;
	
	div = 1;
	if (nbr_1 <= 0 || div <= 0)
		return ;
	while ((div <= nbr_1) || (div <= nbr_2))
	{
		if (((nbr_1 % div) == 0) && ((nbr_2 % div) == 0))
			pgcd = div;
		div++;
	}
	printf("%d", pgcd);
}