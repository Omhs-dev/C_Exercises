/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   camel_to_snake.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ohamadou <ohamadou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/05 17:08:08 by ohamadou          #+#    #+#             */
/*   Updated: 2024/01/05 17:37:47 by ohamadou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void camel_to_snake(char *str)
{
	int i = 0;

	while (str[i])
	{
		if (str[i] >= 'A' && str[i] <= 'Z')
		{
			write(1, "_", 1);
			str[i] = str[i] + 32;
		}
		write(1, &str[i], 1);
		i++;
	}
}

int main(int argc, char *argv[])
{
	if (argc == 2)
		camel_to_snake(argv[1]);
	write(1, "\n", 1);
	return (0);
}
