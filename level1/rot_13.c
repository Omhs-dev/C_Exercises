/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rot_13.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ohamadou <ohamadou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/18 17:35:30 by ohamadou          #+#    #+#             */
/*   Updated: 2023/08/20 17:11:06 by ohamadou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void repeat_alpha(char *str)
{
	while (*str)
	{
		if (*str >= 'a' && *str <= 'z')
			*str = (*str + 13 - 'a') % 26 + 'a';
		else if (*str >= 'A' && *str <= 'Z')
			*str = (*str + 13 - 'A') % 26 + 'A';
		write(1, str, 1);
		++str;
	}
}

int main(int argc, char **argv)
{
	if (argc == 2)
		repeat_alpha(argv[1]);
	write(1, "\n", 1);
	return(0);
}
