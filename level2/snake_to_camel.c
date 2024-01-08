/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   snake_to_camel.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ohamadou <ohamadou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/07 21:25:54 by ohamadou          #+#    #+#             */
/*   Updated: 2024/01/07 21:51:22 by ohamadou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void snake_to_camel(char *str)
{
	while (*str)
	{
		if (*str == '_')
		{
			str++;
			*str = *str - 32;
		}
		write(1, str, 1);
		str++;
	}
}

int main(int argc, char **argv)
{
	if (argc == 2)
		snake_to_camel(argv[1]);
	write(1, "\n", 1);
	return (0);
}
