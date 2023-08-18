/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fizzbuzz.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ohamadou <ohamadou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/21 19:58:22 by ohamadou          #+#    #+#             */
/*   Updated: 2023/08/16 23:37:17 by ohamadou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void write_number(int nbr)
{
	char str[10] = "0123456789";

	if (nbr > 9)
		write_number(nbr / 10);
	write(1, &str[nbr % 10], 1);
}

void fizzbuzz(void)
{
	int nbr;

	nbr = 1;
	while (nbr <= 100)
	{
		if (nbr % 15 == 0)
			write(1, "fizzbuzz", 9);
		else if (nbr % 3 == 0)
			write(1, "fizz", 5);
		else if (nbr % 5 == 0)
			write(1, "buzz", 5);
		else
			write_number(nbr);
		write(1, "\n", 1);
		nbr++;
	}
}

int main()
{
	fizzbuzz();
}
