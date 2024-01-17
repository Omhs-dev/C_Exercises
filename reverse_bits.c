/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   reverse_bits.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ohamadou <ohamadou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/17 22:26:25 by ohamadou          #+#    #+#             */
/*   Updated: 2024/01/17 22:32:49 by ohamadou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned char	reverse_bits(unsigned char octet)
{
	int i = 8;
	unsigned int bit;

	while (i > 0)
	{
		bit = bit * 2 + (octet % 2);
		octet = octet / 2;
		i--;
	}
	return (bit);
}

#include <stdio.h>

unsigned char reverse_bits(unsigned char octet);

int main()
{
    unsigned char original = 2;  // Example value, you can change it as needed
    unsigned char reversed;

    // Print the original and reversed binary representations
    printf("Original: ");
    for (int i = 7; i >= 0; i--)
    {
        printf("%d", (original >> i) & 1);
    }

    reversed = reverse_bits(original);

    printf("\nReversed: ");
    for (int i = 7; i >= 0; i--)
    {
        printf("%d", (reversed >> i) & 1);
    }

    printf("\n");

    return 0;
}
