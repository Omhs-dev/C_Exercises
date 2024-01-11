/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tab_mult.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ohamadou <ohamadou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/09 19:23:32 by ohamadou          #+#    #+#             */
/*   Updated: 2024/01/10 15:20:30 by ohamadou         ###   ########.fr       */
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

int mini_atoi(char *str)
{
	int opr = 0;
	
	while (*str)
	{
		opr = opr * 10;
		opr = opr + *str++ - '0';
	}
	return (opr);
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
	int i = 1;
	int nbr;

	if (argc == 2)
	{
		nbr = mini_atoi(argv[1]);
		while (i < 9)
		{
			mini_putnbr(i);
			ft_putstr(" x ");
			mini_putnbr(nbr);
			ft_putstr(" = ");
			mini_putnbr(i * nbr);
			if (i < 9)
				ft_putchar('\n');
			i++;
		}
	}
	return (0);
}
