/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   lcm.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ohamadou <ohamadou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/08 19:10:30 by ohamadou          #+#    #+#             */
/*   Updated: 2024/01/08 19:26:53 by ohamadou         ###   ########.fr       */
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
		++lcm;
	}
}

#include <stdio.h>

int main(void)
{
	printf("%u\n", lcm(14, 24));
}
