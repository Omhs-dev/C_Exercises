/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   max.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ohamadou <ohamadou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/07 20:25:43 by ohamadou          #+#    #+#             */
/*   Updated: 2024/01/07 20:47:13 by ohamadou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		max(int* tab, unsigned int len)
{
	int result;
	unsigned int i;

	if (len == 0)
		return (0);
	i = 0;
	result = tab[i];
	while (i < len)
	{
		if (result < tab[i])
			result = tab[i];
		i++;
	}
	return (result);
}

#include <stdio.h>

int main()
{
    int array1[] = {5, 10, 3, 8, 15};
    int length1 = sizeof(array1) / sizeof(array1[0]);

    int array2[] = {-2, -7, 9, -1, -5};
    int length2 = sizeof(array2) / sizeof(array2[0]);

    int array3[] = {100, 42, 75, 90, 120000000};
    int length3 = sizeof(array3) / sizeof(array3[0]);

    printf("Maximum value in array1: %d\n", max(array1, length1));
    printf("Maximum value in array2: %d\n", max(array2, length2));
    printf("Maximum value in array3: %d\n", max(array3, length3));

    return 0;
}
