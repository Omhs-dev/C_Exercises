/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fizzbuzz.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ohamadou <ohamadou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/15 16:40:26 by ohamadou          #+#    #+#             */
/*   Updated: 2023/08/17 02:08:46 by ohamadou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void count_nbr(int nbr)
{
	char str[10] = "0123456789";

	if (nbr >= 10)
		count_nbr(nbr / 10);
	write(1, &str[nbr % 10], 1);
}

void fizzbuzz(void)
{
	int nbr = 1;
	
	while (nbr <= 100)
	{
		if (nbr % 15 == 0)
			write(1, "fizzbuzz", 9);
		else if (nbr % 3 == 0)
			write(1, "fizz", 4);
		else if (nbr % 5 == 0)
			write(1, "buzz", 4);
		else
			count_nbr(nbr);
		write(1, "\n", 4);
		nbr++;
	}
}

int main()
{
	fizzbuzz();
}
