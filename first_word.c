/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   first_word.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ohamadou <ohamadou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/15 16:15:20 by ohamadou          #+#    #+#             */
/*   Updated: 2023/08/15 16:38:43 by ohamadou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

char first_word(char *str)
{
	int i;

	i = 0;
	while (str[i])
	{
		if (str[i] == ' ' || str[i] == 9)
		{
			return (1);
			write(1, "\n", 2);
		}
		write(1, &str[i], 1);
		i++;
	}
	return (str[i]);
}

int main(void)
{
	first_word("");
	return (0);
}
