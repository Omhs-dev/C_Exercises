/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_bits.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ohamadou <ohamadou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/07 20:48:03 by ohamadou          #+#    #+#             */
/*   Updated: 2024/01/10 21:48:53 by ohamadou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	print_bits(unsigned char octet)
{
	int i = 8;
	unsigned char bit;

	while (i--)
	{
		bit = (octet >> i & 1) + '0';
		write(1, &bit, 1);
	}
}

#include <unistd.h>

int main()
{
    unsigned char octet = 2;  // Example value, you can change it as needed

    // Print the binary representation of the octet
    print_bits(octet);

    // Add a newline for better output formatting
    write(1, "\n", 1);

    return 0;
}
