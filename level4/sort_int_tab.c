/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_int_tab.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ohamadou <ohamadou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/11 00:35:02 by ohamadou          #+#    #+#             */
/*   Updated: 2024/01/14 17:44:46 by ohamadou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void sort_int_tab(int *tab, unsigned int size)
{
	unsigned int i = 0;
	int temp;

	while (i < (size - 1))
	{
		if (tab[i] > tab[i + 1])
		{
			temp = tab[i];
			tab[i] = tab[i + 1];
			tab [i + 1] = temp;
			i = 0;
		}
		else
			i++;
	}
}

#include <stdio.h>

int main(void)
{
    // Example array of integers
    int numbers[] = {4, 2, 7, 1, 9, 5};

    // Calculate the size of the array
    unsigned int size = sizeof(numbers) / sizeof(numbers[0]);

    // Display the original array
    printf("Original Array: ");
    for (unsigned int i = 0; i < size; i++)
    {
        printf("%d ", numbers[i]);
    }
    printf("\n");

    // Sort the array using the sort_int_tab function
    sort_int_tab(numbers, size);

    // Display the sorted array
    printf("Sorted Array: ");
    for (unsigned int i = 0; i < size; i++)
    {
        printf("%d ", numbers[i]);
    }
    printf("\n");

    return 0;
}
