/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fizz_buzz.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ohamadou <ohamadou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/22 17:44:04 by ohamadou          #+#    #+#             */
/*   Updated: 2023/08/22 18:07:12 by ohamadou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void write_nbrs(int nbr)
{
	char n[10] = "0123456789";

	if (nbr >= 10)
		write_nbrs(nbr / 10);
	write(1, &n[nbr % 10], 1);
}

void fizzbuzz(void)
{
	int i = 1;
	
	while (i <= 100)
	{
		if (i % 15 == 0)
			write(1, "Fizzbuzz", 10);
		else if (i % 3 == 0)
			write(1, "Fizz", 4);
		else if (i % 5 == 0)
			write(1, "Buzz", 4);
		else
			write_nbrs(i);
		write(1, "\n", 4);
		i++;
	}
}

int main()
{
	fizzbuzz();
	return (0);
}
