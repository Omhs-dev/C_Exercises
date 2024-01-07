/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ohamadou <ohamadou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/05 17:52:59 by ohamadou          #+#    #+#             */
/*   Updated: 2024/01/06 20:09:11 by ohamadou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_atoi(const char *str)
{
	int opr;
	int sign;

	sign = 1;
	if (*str == 32 || (*str >= 9 && *str <= 13))
		str++;
	if (*str == '-')
		sign = -1;
	if (*str == '+' || *str == '-')
		str++;
	opr = 0;
	while (*str >= '0' && *str <= '9')
	{
		opr = opr * 10 + *str - '0';
		str++;
	}
	return (opr * sign);
}

#include <stdio.h>
#include <stdlib.h>

int	main()
{
    char str[] = "er584526";
    char str1[] = "584526900";
    int val = ft_atoi(str);
    int val1 = ft_atoi(str1);
    printf("%d\n", val);
    printf("%d\n", val1);
    return 0;
}
