/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   expand_str.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ohamadou <ohamadou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/04 05:59:21 by ohamadou          #+#    #+#             */
/*   Updated: 2024/01/04 06:10:22 by ohamadou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void expand_str(char *str)
{
	int i = 0;
	
	while (str[i] == ' ' || str[i] == '\t')
		i++;
	while (str[i])
	{
		if (str[i] == ' ' || str[i] == '\t')
		{
			if (str[i + 1] > ' ' && str[i + 1] != '\0')
				write(1, "   ", 3);
		}
		else if (str[i] != ' ' || str[i] != '\t')
		{
			write(1, &str[i], 1);
		}
		i++;
	}
}

int main(int argc, char *argv[])
{
	if (argc == 2)
		expand_str(argv[1]);
	write(1, "\n", 1);
	return (0);
}
