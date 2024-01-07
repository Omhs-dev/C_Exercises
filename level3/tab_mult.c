/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tab_mult.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ohamadou <ohamadou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/04 08:54:25 by ohamadou          #+#    #+#             */
/*   Updated: 2024/01/04 09:08:23 by ohamadou         ###   ########.fr       */
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
	if (nbr > 9)
	{
		mini_putnbr(nbr / 10);
		mini_putnbr(nbr % 10);
	}
	else
		ft_putchar(nbr + '0');
}

int mini_atoi(char *str)
{
	int i;
	int opr;

	i = 0;
	opr = 0;
	while (str[i])
	{
		opr *= 10;
		opr = opr + str[i] - '0';
		i++;
	}
	return (opr);
}

int main(int argc, char *argv[])
{
	int i;
	int nbr;

	i = 1;
	if (argc == 2)
	{
		nbr = mini_atoi(argv[1]);
		while (i <= 9)
		{
			mini_putnbr(i);
			ft_putstr(" x ");
			mini_putnbr(nbr);
			ft_putstr(" = ");
			mini_putnbr(nbr * i);
			if (i < 9)
				ft_putchar('\n');
			i++;
		}
	}
	ft_putchar('\n');
	return (0);
}
