/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   union.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ohamadou <ohamadou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/07 21:54:38 by ohamadou          #+#    #+#             */
/*   Updated: 2024/01/07 22:42:37 by ohamadou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int check(char c, char *str, int len)
{
	int i = 0;

	while (i < len)
	{
		if (str[i] == c)
			return (0);
		i++;
	}
	return (1);
}

void print_union(char *str, char *str2)
{
	int i = 0;
	int j = 0;
	int k = 0;

	while (str[i])
		i++;
	while (str2[j])
	{
		str[i] = str2[j];
		i++;
		j++;
	}
	i--;
	while (k <= i)
	{
		if (check(str[k], str, k) == 1)
			write(1, &str[k], 1);
		k++;
	}
}

int	main(int argc, char **argv)
{
	if (argc == 3)
		print_union(argv[1], argv[2]);
	write(1, "\n", 1);
	return (0);
}



























