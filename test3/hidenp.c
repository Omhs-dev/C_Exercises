/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   hidenp.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ohamadou <ohamadou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/16 17:19:38 by ohamadou          #+#    #+#             */
/*   Updated: 2024/01/16 17:35:42 by ohamadou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void ft_putchar(char c)
{
	write(1, &c, 1);
}

int ft_strlen(char *str)
{
	int i = 0;

	while (str[i])
		i++;
	return (i);
}

void hidenp(char *first, char *second)
{
	int i_f = 0;
	int i_s = 0;

	while (second[i_s])
	{
		if (first[i_f] == second[i_s])
			i_f++;
		i_s++;
	}
	if (i_f == ft_strlen(first))
		ft_putchar('1');
	else
		ft_putchar('0');
}

int main(int argc, char **argv)
{
	if (argc == 3)
		hidenp(argv[1], argv[2]);
	ft_putchar('\n');
	return (0);
}
