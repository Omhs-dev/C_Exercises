/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   hidenp.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ohamadou <ohamadou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/04 06:35:01 by ohamadou          #+#    #+#             */
/*   Updated: 2024/01/04 06:49:07 by ohamadou         ###   ########.fr       */
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
	int i_first = 0;
	int i_sec = 0;
	
	while (second[i_sec])
	{
		if (first[i_first] == second[i_sec])
			i_first++;
		i_sec++;
	}
	if (i_first == ft_strlen(first))
		ft_putchar('1');
	else
		ft_putchar('0');
}

int main(int argc, char *argv[])
{
	if (argc == 3)
		hidenp(argv[1], argv[2]);
	ft_putchar('\n');
	return (0);
}
