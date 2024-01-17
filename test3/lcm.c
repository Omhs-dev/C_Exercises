/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   lcm.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ohamadou <ohamadou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/16 17:47:52 by ohamadou          #+#    #+#             */
/*   Updated: 2024/01/17 20:01:35 by ohamadou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int    lcm(unsigned int a, unsigned int b)
{
	unsigned int lcm;

	if (a == 0 || b == 0)
		return (0);
	if (a > b)
		lcm = a;
	else
		lcm = b;
	while ("lcm")
	{
		if (lcm % a == 0 && lcm % b == 0)
			return (lcm);
		lcm++;
	}
}

#include <stdio.h>

int	main(void)
{
	printf("%u\n", lcm(2, 6));
}
