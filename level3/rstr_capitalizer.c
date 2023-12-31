/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rstr_capitalizer.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ohamadou <ohamadou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/04 09:46:27 by ohamadou          #+#    #+#             */
/*   Updated: 2024/01/04 10:03:55 by ohamadou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void ft_putchar(char c)
{
	write(1, &c, 1);
}

void rstr_capitalizer(char *str)
{
	int i = 0;

	while (str[i])
	{
		if (str[i] >= 'A' && str[i] <= 'Z')
			str[i] = str[i] + 32;
		if (str[i] >= 'a' && str[i] <= 'z' && (str[i + 1] == ' '
				|| str[i + 1] == '\t' || str[i + 1] == '\0'))
			str[i] = str[i] - 32;
		ft_putchar(str[i]);
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
		if (i < argc)
		{
			rstr_capitalizer(argv[i]);
			ft_putchar('\n');
			i++;
		}
	}
	return (0);
}
