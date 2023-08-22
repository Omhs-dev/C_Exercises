/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   first_word.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ohamadou <ohamadou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/21 18:31:55 by ohamadou          #+#    #+#             */
/*   Updated: 2023/06/21 19:56:55 by ohamadou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

char	first_word(char *str)
{
	while (*str == 32 || *str == 9)
		str++;
	while ((*str != 32 || *str == 9) && *str)
	{
		write(1, &*str++, 1);
	}
	return (*str);
}

int	main(int argc, char **argv)
{
	int	i = 0;

	if (argc == 2)
		first_word(&argv[1][i++]);
	write(1, "\n", 1);
}
