/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   first_word.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ohamadou <ohamadou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/02 22:21:17 by ohamadou          #+#    #+#             */
/*   Updated: 2024/01/02 22:26:33 by ohamadou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char first_word(char *str)
{
	int i = 0;

	while (str)
	{
		if (str[i] == ' ' || str[i] == 9)
		{
			return (1);
			write(1, "\n", 2);
		}
		write(1, &str[i], 1);
	}
}
