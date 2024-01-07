/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   wdmatch.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ohamadou <ohamadou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/07 22:42:57 by ohamadou          #+#    #+#             */
/*   Updated: 2024/01/07 22:55:31 by ohamadou         ###   ########.fr       */
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

int ft_strlen(char *str)
{
	int i = 0;

	while (str[i])
		i++;
	return (i);
}

void wdmatch(char *first, char *second)
{
	int i_f;
	int i_s;

	i_f = 0;
	i_s = 0;
	while (second[i_s])
	{
		if (first[i_f] == second[i_s])
			i_f++;
		i_s++;
	}
	if (i_f == ft_strlen(first))
		ft_putstr(first);
}

int main(int argc, char **argv)
{
	if (argc == 3)
		wdmatch(argv[1], argv[2]);
	ft_putchar('\n');
	return (0);
}
