/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ohamadou <ohamadou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/02 13:52:58 by ohamadou          #+#    #+#             */
/*   Updated: 2024/01/02 17:47:38 by ohamadou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int len_nbr(int n)
{
	int i;

	i = 0;
	if (n <= 0)
		i = 1;
	while (n)
	{
		n = n / 10;
		i++;
	}
	return (i);
}

char *ft_itoa(int n)
{
	long len;
	long nb;
	char *mem;
	
	len = len_nbr(n);
	mem = (char *)malloc(sizeof(char) * (len + 1));
	if (!mem)
		return (NULL);
	mem[len--] = '\0';
	if (n < 0)
		nb = -n;
	else
		nb = n;
	while (len >= 0)
	{
		mem[len] = (nb % 10) + 48;
		len--;
		nb /= 10;
	}
	if (n < 0)
		mem[0] = '-';
	return (mem);
}

#include <stdio.h>
#include <stdlib.h>

int main() {
    int num1 = 123;
    int num2 = -4567;
    int num3 = 0;

    char *str1 = ft_itoa(num1);
    char *str2 = ft_itoa(num2);
    char *str3 = ft_itoa(num3);

    printf("Integer: %d, String: %s\n", num1, str1);
    printf("Integer: %d, String: %s\n", num2, str2);
    printf("Integer: %d, String: %s\n", num3, str3);

    // Don't forget to free the allocated memory
    free(str1);
    free(str2);
    free(str3);

    return 0;
}
