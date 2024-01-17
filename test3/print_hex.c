/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_hex.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ohamadou <ohamadou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/16 20:26:47 by ohamadou          #+#    #+#             */
/*   Updated: 2024/01/16 20:45:42 by ohamadou         ###   ########.fr       */
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
		opr = opr * 10 + *str++ - '0';
	return (opr);
}

void print_hex(int nbr)
{
	if (nbr >= 16)
		print_hex(nbr / 16);
	write(1, &"0123456789abcdef"[nbr % 16], 1);
}

int main(int argc, char **argv)
{
	if (argc == 2)
		print_hex(mini_atoi(argv[1]));
	ft_putchar('\n');
	return (0);
}
