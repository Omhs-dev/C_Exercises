/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   add_prime_sum.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ohamadou <ohamadou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/08 15:50:53 by ohamadou          #+#    #+#             */
/*   Updated: 2024/01/15 17:25:53 by ohamadou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void ft_putchar(char c)
{
	write(1, &c, 1);
}

int mini_atoi(char *str)
{
	int opr = 0;

	while (*str)
	{
		opr = opr * 10 + *str - '0';
		str++;
	}
	return (opr);
}

void mini_putnbr(int n)
{
	if (n >= 10)
		mini_putnbr(n / 10);
	ft_putchar((n % 10 + '0'));
}

int check_prime(int n)
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
	int n;
	int i = 2;
	int sum = 0;

	n = mini_atoi(str);
	while (i <= n)
	{
		if (check_prime(i))
			sum = sum + i;
		i++;
	}
	mini_putnbr(sum);
}

int main(int argc, char **argv)
{
	if (argc == 2)
		add_prime_sum(argv[1]);
	if (argc == 1 || argc > 2)
		ft_putchar('0');
	ft_putchar('\n');
	return (0);
}
