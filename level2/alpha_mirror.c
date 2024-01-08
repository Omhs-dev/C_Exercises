/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   alpha_mirror.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ohamadou <ohamadou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/05 14:45:08 by ohamadou          #+#    #+#             */
/*   Updated: 2024/01/05 17:07:44 by ohamadou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void alpha_mirror(char *str)
{
	while (*str)
	{
		if (*str >= 'a' && *str <= 'z')
			*str = 'z' - *str + 'a';
		if (*str >= 'A' && *str <= 'Z')
			*str = 'Z' - *str + 'A';
		write(1, str, 1);
		str++;
	}
}

int main(int argc, char *argv[])
{
	if (argc == 2)
		alpha_mirror(argv[1]);
	write(1, "\n", 1);
	return (0);
}
