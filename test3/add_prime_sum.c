/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   add_prime_sum.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ohamadou <ohamadou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/15 17:39:35 by ohamadou          #+#    #+#             */
/*   Updated: 2024/01/15 18:02:20 by ohamadou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void ft_putchar(char c)
{
	write(1, &c, 1);
}

int mini_atoi(char *str)
{
	int opr;

	opr = 0;
	while (*str)
	{
		opr = opr * 10 + *str - '0';
		str++;
	}
	return (opr);
}

void mini_putnbr(int nb)
{
	if (nb >= 10)
		mini_putnbr(nb / 10);
	ft_putchar(nb % 10 + '0');
}

int is_prime(int n)
{
	int i = 2;

	if (n <= 1)
		return (0);
	while (i <= n / 2)
	{
		if (n % i == 0)
			return (0);
		i++;
	}
	return (1);
}

void add_prime_sum(char *str)
{
	int i = 2;
	int num = 0;
	int nb;

	nb = mini_atoi(str);
	while (i <= nb)
	{
		if (is_prime(i))
			num = num + i;
		i++;
	}
	mini_putnbr(num);
}

int main(int argc, char **argv)
{
	if (argc == 2)
		add_prime_sum(argv[1]);
	if (argc < 2 || argc > 2)
		ft_putchar('0');
	ft_putchar('\n');
	return (0);
}
