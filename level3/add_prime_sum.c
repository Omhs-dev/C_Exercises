/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   add_prime_sum.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ohamadou <ohamadou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/08 15:50:53 by ohamadou          #+#    #+#             */
/*   Updated: 2024/01/08 16:23:33 by ohamadou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int ft_atoi(char *s)
{
	int res = 0;

	while (*s)
		res = res * 10 + *s++ - '0';
	return (res);
}

int is_prime(int num)
{
	int i = 2;

	if (num <= 1)
		return (0);
	while (i * i <= num)
	{
		if (num % i == 0)
			return (0);
		i++;
	}
	return (1);
}

void put_nbr(int n)
{
	char digit;

	if (n >= 10)
		put_nbr(n / 10);
	digit = n % 10 + '0';
	write(1, &digit, 1);
}

void add_prime_sum(char *str)
{
	int nbr;
	int sum;

	nbr = ft_atoi(str);
	sum = 0;
	while (nbr > 0)
	{
		if (is_prime(nbr))
			sum += nbr;
		nbr--;
	}
	put_nbr(sum);
}

int main(int argc, char **argv)
{
	if (argc == 2)
		add_prime_sum(argv[1]);
	write(1, "\n", 1);
	return (0);
}
