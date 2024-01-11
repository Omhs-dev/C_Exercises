/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_hex.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ohamadou <ohamadou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/08 20:58:00 by ohamadou          #+#    #+#             */
/*   Updated: 2024/01/09 18:34:24 by ohamadou         ###   ########.fr       */
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
		opr = opr * 10;
		opr = opr + *str++ - '0';
	}
	return (opr);
}

void print_hex(int nbr)
{
	if (nbr >= 16)
		print_hex(nbr / 16);
	ft_putchar("0123456789abcdef"[nbr % 16]);
}

int main(int argc, char **argv)
{
	if (argc == 2)
		print_hex(mini_atoi(argv[1]));
	write(1, "\n", 1);
	return (0);
}
