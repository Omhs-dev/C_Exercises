/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rostring.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ohamadou <ohamadou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/17 23:56:00 by ohamadou          #+#    #+#             */
/*   Updated: 2024/01/18 00:07:43 by ohamadou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void ft_putchar(char c)
{
	write(1, &c, 1);
}

int is_space(char c)
{
	if (c == ' ' || c == '\t')
		return (1);
	return (0);
}

void print_firstword(char *str, int space)
{
	while (str[space] && !is_space(str[space]))
	{
		ft_putchar(str[space]);
		space++;
	}
}

void rostring(char *str)
{
	int i;
	int space;

	space = 0;
	while (str[space] && is_space(str[space]))
		space++;
	i = space;
	while (str[i] && !is_space(str[i]))
		i++;
	while (str[i])
	{
		if (str[i] && !is_space(str[i]) && is_space(str[i - 1]))
		{
			while (str[i] && !is_space(str[i]))
			{
				ft_putchar(str[i]);
				i++;
			}
			ft_putchar(' ');
		}
		i++;
	}
	print_firstword(str, space);
}

int main(int argc, char **argv)
{
	if (argc >= 2)
		rostring(argv[1]);
	ft_putchar('\n');
	return (0);
}
