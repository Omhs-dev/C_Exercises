/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   paramsum.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ohamadou <ohamadou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/16 18:42:19 by ohamadou          #+#    #+#             */
/*   Updated: 2024/01/16 19:01:15 by ohamadou         ###   ########.fr       */
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
		mini_putnbr(nbr / 10);
	ft_putchar((nbr % 10 + '0'));
}

int main(int argc, char **argv)
{
	(void)argv;
	mini_putnbr(argc - 1);
	ft_putchar('\n');
	return (0);
}
