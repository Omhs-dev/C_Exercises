/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   last_word.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ohamadou <ohamadou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/07 19:46:25 by ohamadou          #+#    #+#             */
/*   Updated: 2024/01/16 15:18:42 by ohamadou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

#include <unistd.h>

int is_space(char c)
{
	if (c == ' ' || c == '\t')
		return (1);
	return (0);
}

void last_word(char *str)
{
	int i = 0;
	int j;
	int first_word;

	first_word = 1;
	while (str[i])
		i++;
	while (i >= 0)
	{
		while (i >= 0 && (!str[i] || is_space(str[i])))
			i--;
		j = i;
		while (j >= 0 && !is_space(str[j]))
			j--;
		if (first_word == 0)
			break ;
		write(1, &str[j + 1], i - j);
		first_word = 0;
		i = j;
	}
}

int main(int argc, char **argv)
{
	if (argc == 2)
		last_word(argv[1]);
	write(1, "\n", 1);
	return (0);
}
