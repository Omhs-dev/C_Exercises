/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   is_power_of_2.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ohamadou <ohamadou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/07 19:39:52 by ohamadou          #+#    #+#             */
/*   Updated: 2024/01/07 19:45:54 by ohamadou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	    is_power_of_2(unsigned int n)
{
	unsigned long int i = 1;

	while (i <= n)
	{
		if (i == n)
			return (1);
		i = i * 2;
	}
	return (0);
}
#include <stdio.h>

int	main(void)
{
	printf("%d\n", is_power_of_2(0));
	printf("%d\n", is_power_of_2(2));
	printf("%d\n", is_power_of_2(4));
	printf("%d\n", is_power_of_2(6));
	printf("%d\n", is_power_of_2(8));
	printf("%d\n", is_power_of_2(32));
	printf("%d\n", is_power_of_2(42));
	printf("%d\n", is_power_of_2(67));
	printf("%d\n", is_power_of_2(124));
	printf("%d\n", is_power_of_2(256));
	return (0);
}