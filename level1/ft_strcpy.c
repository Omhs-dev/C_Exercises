/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ohamadou <ohamadou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/21 21:02:19 by ohamadou          #+#    #+#             */
/*   Updated: 2023/06/21 21:24:07 by ohamadou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char *ft_strcpy(char *s1, char *s2)
{
	char *o_s1 = s1;
	
	while (*s2)
	{
		*s1 = *s2;
		s1++;
		s2++;
	}
	*s1 = '\0';
	return (o_s1);
}

int main () {
	char src[40];
	char dest[100];

	ft_strcpy(src, "This is tutorialspoint.com");
	ft_strcpy(dest, src);
	printf("Final copied string : %s\n", dest);
	return (0);
}