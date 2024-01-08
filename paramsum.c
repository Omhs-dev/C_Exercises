/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   paramsum.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ohamadou <ohamadou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/08 19:33:11 by ohamadou          #+#    #+#             */
/*   Updated: 2024/01/08 19:41:05 by ohamadou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void ft_putchar(char c)
{
	write(1, &c, 1);
}

void mini_putnbr(int nbr)
{
	if (nbr >= 10)
	{
		mini_putnbr(nbr / 10);
		mini_putnbr(nbr % 10);
	}
	else
		ft_putchar(nbr + '0');
}

int main(int argc, char **argv)
{
	(void)argv;
	mini_putnbr(argc - 1);
	ft_putchar('\n');
	return (0);
}
