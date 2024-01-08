/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrev.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ohamadou <ohamadou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/06 22:48:21 by ohamadou          #+#    #+#             */
/*   Updated: 2024/01/07 16:54:59 by ohamadou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char    *ft_strrev(char *str)
{
	int i;
	int len;
	char temp;

	i = -1;
	len = 0;
	while (str[len])
		len++;
	while (++i < len / 2)
	{
		temp = str[i];
		str[i] = str[len - 1 - i];
		str[len - 1 - i] = temp;
	}
	return (str);
}
// #include <unistd.h>
#include <stdio.h>
#include <string.h>

int main()
{
	char str[50] = "geeksforgeeks";
	printf("The given string is =%s\n", str);
    printf("After reversing string is =%s", ft_strrev(str));
	// write(1, "\n", 1);
	return (0);
}
