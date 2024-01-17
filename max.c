/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   max.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ohamadou <ohamadou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/17 22:09:16 by ohamadou          #+#    #+#             */
/*   Updated: 2024/01/17 22:22:43 by ohamadou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		max(int* tab, unsigned int len)
{
	unsigned int i = 0;
	int opr;

	opr = tab[i];
	while (i < len)
	{
		if (opr < tab[i])
		{
			opr = tab[i];
		}
		i++;
	}
	return (opr);
}

#include <stdio.h>

int main()
{
	 int numbers[5];  // This array can hold 5 integers

    // Initialize the array elements
    numbers[0] = 10;
    numbers[1] = 100;
    numbers[2] = 30;
    numbers[3] = 40;
    numbers[4] = 50;

	printf("%d", max(numbers, 5));
}

