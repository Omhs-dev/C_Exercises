/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_hex.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ohamadou <ohamadou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/04 07:39:27 by ohamadou          #+#    #+#             */
/*   Updated: 2024/01/04 07:49:27 by ohamadou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void ft_putchar(char c)
{
	write(1, &c, 1);
}

int small_atoi(char *str)
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

void print_hex(int nbr)
{
	if (nbr >= 16)
		print_hex(nbr / 16);
	ft_putchar("0123456789abcdef"[nbr % 16]);
}

int main(int argc, char *argv[])
{
	if (argc == 2)
		print_hex(small_atoi(argv[1]));
	ft_putchar('\n');
	return (0);
}
