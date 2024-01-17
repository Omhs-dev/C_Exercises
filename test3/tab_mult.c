/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tab_mult.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ohamadou <ohamadou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/16 21:26:50 by ohamadou          #+#    #+#             */
/*   Updated: 2024/01/16 21:44:42 by ohamadou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void ft_putchar(char c)
{
	write(1, &c, 1);
}

void ft_putstr(char *str)
{
	while (*str)
		write(1, &*str++, 1);
}

void mini_putnbr(int nbr)
{
	if (nbr >= 10)
		mini_putnbr(nbr / 10);
	ft_putchar((nbr % 10 + '0'));
}

int mini_atoi(char *str)
{
	int opr = 0;

	while (*str)
		opr = opr * 10 + *str++ - '0';
	return (opr);
}

int main(int argc, char **argv)
{
	int i = 1;
	int e;

	if (argc == 2)
	{
		e = mini_atoi(argv[1]);
		while (i <= 9)
		{
			mini_putnbr(i);
			ft_putstr(" x ");
			mini_putnbr(e);
			ft_putstr(" = ");
			mini_putnbr(i * e);
			if (i < 9)
				ft_putchar('\n');
			i++;
		}
	}
	else
		ft_putchar('\n');
	return (0);
}
