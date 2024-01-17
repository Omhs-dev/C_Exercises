/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   inter.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ohamadou <ohamadou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/17 21:43:28 by ohamadou          #+#    #+#             */
/*   Updated: 2024/01/17 22:02:32 by ohamadou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int check_inter(char *str, char c, int len)
{
	int i = 0;

	while (str[i] && (i < len || len == -1))
	{
		if (str[i] == c)
			return (1);
		i++;
	}
	return (0);
}

void inter(char *first, char *second)
{
	int i = 0;

	while (first[i])
	{
		if (!check_inter(first, first[i], i) &&
			check_inter(second, first[i], -1))
			write(1, &first[i], 1);
		i++;
	}
}

int main(int argc, char **argv)
{
	if (argc == 3)
		inter(argv[1], argv[2]);
	write(1, "\n", 1);
	return (0);
}
