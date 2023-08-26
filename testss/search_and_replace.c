/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   search_and_replace.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ohamadou <ohamadou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/22 19:01:59 by ohamadou          #+#    #+#             */
/*   Updated: 2023/08/22 19:11:00 by ohamadou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void s_and_r(char *str, char c, char r)
{
	while (*str)
	{
		if (*str == c)
			*str = r;
		write(1, str, 1);
		str++;
	}
}

int main(int argc, char **argv)
{
	if (argc == 4 && !argv[2][1] && !argv[3][1])
		s_and_r(argv[1], argv[2][0], argv[3][0]);
	write(1, "\n", 1);
}