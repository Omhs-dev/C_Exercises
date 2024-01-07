/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   str_capitalizer.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ohamadou <ohamadou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/04 09:13:37 by ohamadou          #+#    #+#             */
/*   Updated: 2024/01/04 09:43:08 by ohamadou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void ft_putchar(char c)
{
	write(1, &c, 1);
}

void str_capitalizer(char *str)
{
	int i = 1;
	
	if (str[0] >= 'a' && str[0] <= 'z')
		str[0] = str[0] - 32;
		ft_putchar(str[0]);
	while (str[i])
	{
		if (str[i] >= 'A' && str[i] <= 'Z')
			str[i] = str[i] + 32;
		if (str[i] >= 'a' && str[i] <= 'z' && ((str[i - 1]) == ' ' || (str[i - 1]) == '\t'))
			str[i] = str[i] - 32;
		write(1, &str[i], 1);
		i++;
	}
}

int main(int argc, char *argv[])
{
	int i;

	if (argc < 2)
		ft_putchar('\n');
	else
	{
		i = 1;
		while (i < argc)
		{
			str_capitalizer(argv[i]);
			ft_putchar('\n');
			i++;
		}
	}
	return (0);
}
