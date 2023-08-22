/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ohamadou <ohamadou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/21 21:25:22 by ohamadou          #+#    #+#             */
/*   Updated: 2023/06/21 21:34:58 by ohamadou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_strlen(char *str)
{
	int	n;

	n = 0;
	while (*str)
	{
		str++;
		n++;
	}
	return (n);
}

// int main(void)
// {
// 	char str[50];
//    int len;

//    len = ft_strlen("hello");
//    printf("Length of |%s| is |%d|\n", str, len);
// }
