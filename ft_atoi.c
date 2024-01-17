/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ohamadou <ohamadou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/17 20:28:57 by ohamadou          #+#    #+#             */
/*   Updated: 2024/01/17 20:42:42 by ohamadou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_atoi(const char *str)
{
	int sign;
	int opr;
	int i;

	opr = 0;
	sign = 1;
	i = 0;
	while (str[i] == ' ' || (str[i] >= 9 && str[i] <= 13))
		i++;
	if (str[i] == '-')
		sign = -1;
	if (str[i] == '+' || str[i] == '-')
		i++;
	while (str[i] >= '0' && str[i] <= '9')
	{
		opr = opr * 10 + str[i] - '0';
		i++;
	}
	return (opr * sign);
}

#include <stdio.h>

int main()
{
	int itoaa = ft_atoi("3455");

	printf("%d", itoaa);
}
