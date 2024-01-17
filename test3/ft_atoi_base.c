/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ohamadou <ohamadou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/15 22:05:55 by ohamadou          #+#    #+#             */
/*   Updated: 2024/01/15 22:17:04 by ohamadou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_atoi_base(const char *str, int str_base)
{
	int sign;
	int opr;
	int i;

	sign = 1;
	if (str[i] == '-')
	{
		sign = -1;
		i++;
	}
	while (str[i])
	{
		opr *= str_base;
		if (str[i] >= '0' && str[i] <= '9')
			opr += str[i] - '0';
		else if (str[i] >= 'A' && str[i] <= 'Z')
			opr += str[i] - '7';
		else if (str[i] >= 'a' && str[i] <= 'z')
			opr += str[i] - 'W';
		i++;
	}
	return (sign * sign);
}
