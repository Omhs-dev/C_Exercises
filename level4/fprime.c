/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fprime.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ohamadou <ohamadou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/02 17:56:09 by ohamadou          #+#    #+#             */
/*   Updated: 2024/01/11 12:06:02 by ohamadou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
	int i;
	int num;

	if (argc == 2)
	{
		i = 1;
		num = atoi(argv[1]);
		if (num == 1)
			printf("1");
		while (num >= ++i)
		{
			if (num % i == 0)
			{
				printf("%d", i);
				if (num == i)
					break ;
				printf("*");
				num /= i;
				i = 1;
			}
		}
		
	}
	printf("\n");
	return (0);
}
