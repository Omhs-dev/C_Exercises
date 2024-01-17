/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   camel_to_snake.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ohamadou <ohamadou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/17 20:15:24 by ohamadou          #+#    #+#             */
/*   Updated: 2024/01/17 20:19:48 by ohamadou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void camel_to_snake(char *str)
{
	while (*str)
	{
		if (*str >= 'A' && *str <= 'Z')
		{
			write(1, "_", 1);
			*str = *str + 32;
		}
		write(1, str, 1);
		str++;
	}
}

int main(int argc, char **argv)
{
	if (argc == 2)
		camel_to_snake(argv[1]);
	write(1, "\n", 1);
	return (0);
}
