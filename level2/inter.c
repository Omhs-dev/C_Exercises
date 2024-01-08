/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   inter.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ohamadou <ohamadou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/07 17:41:25 by ohamadou          #+#    #+#             */
/*   Updated: 2024/01/07 18:55:35 by ohamadou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int inter_util(char *str, char c, int len)
{
	int i = 0;

	while (str[i] && (i < len || len == -1))
		if (str[i++] == c)
			return (1);
	return (0);
}

void inter(char *str1, char *str2)
{
	int i = 0;
	while (str1[i])
	{
		if (!inter_util(str1, str1[i], i) && inter_util(str2, str1[i], -1))
			write(1, &str1[i], 1);
		i++;
	}
}

int main(int argc, char **argv)
{
	if (argc == 3)
		inter(&argv[1][0], &argv[2][0]);
	write(1, "\n", 1);
	return (0);
}
