/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   epur_str.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ohamadou <ohamadou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/04 05:46:20 by ohamadou          #+#    #+#             */
/*   Updated: 2024/01/04 05:53:53 by ohamadou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void ft_putchar(char c)
{
	write(1, &c, 1);
}

void epur_str(char *str)
{
	int i;
	
	i = 0;
	while (str[i] == ' ' || str[i] == '\t')
		i++;
	while (str[i])
	{
		if (str[i] == ' ' || str[i] == '\t')
		{
			if (str[i + 1] > ' ' && str[i + 1] != '\0')
				ft_putchar(' ');
		}
		else if (str[i] != ' ' && str[i] != '\t')
			ft_putchar(str[i]);
		i++;
	}
}

int main(int argc, char *argv[])
{
	if (argc == 2)
		epur_str(argv[1]);
	ft_putchar('\n');
	return (0);
}