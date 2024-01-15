/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rev_wstr.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ohamadou <ohamadou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/11 00:54:00 by ohamadou          #+#    #+#             */
/*   Updated: 2024/01/14 14:39:22 by ohamadou         ###   ########.fr       */
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

int is_space(char c)
{
	if (c == ' ' || c == '\t')
		return (1);
	return (0);
}

void rev_wstr(char *str)
{
	int i;
	int j;
	int first_word;

	i = 0;
	first_word = 1;
	while (str[i])
		i++;
	while (i >= 0)
	{
		while (i >= 0 && (!str[i] || is_space(str[i])))
			i--;
		j = i;
		while (j >= 0 && !is_space(str[j]))
			j--;
		if (first_word == 0)
			ft_putchar(' ');
		write(1, &str[j + 1], i - j);
		first_word = 0;
		i = j;
	}
}

int	main(int argc, char **argv)
{
	if (argc == 2)
		rev_wstr(argv[1]);
	ft_putchar('\n');
	return (0);
}
