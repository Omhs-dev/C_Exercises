/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rot_13.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ohamadou <ohamadou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/22 18:45:14 by ohamadou          #+#    #+#             */
/*   Updated: 2023/08/22 18:52:28 by ohamadou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void rot(char *str)
{
	while (*str)
	{
		if (*str >= 'a' && *str <= 'z')
			*str = (*str + 13 - 'a') % 26 + 'a';
		else if (*str >= 'A' && *str <= 'Z')
			*str = (*str + 13 - 'A') % 26 + 'A';
		write(1, str, 1);
		str++;
	}
}

int main(int argc, char **argv)
{
	if (argc == 2)
		rot(argv[1]);
	write(1, "\n", 1);
}