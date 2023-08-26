/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ohamadou <ohamadou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/22 18:17:53 by ohamadou          #+#    #+#             */
/*   Updated: 2023/08/22 18:21:53 by ohamadou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>

void	ft_swap(int *a, int *b)
{
	int temp;

	temp = *a;
	*a = *b;
	*b = temp;
}

// int main()
// {
// 	// char src[40];
// 	// char dest[100];

// 	ft_swap(1, 2);
// 	// ft_strcpy(dest, src);
// 	printf("Final copied string : %d\n", len);
// }