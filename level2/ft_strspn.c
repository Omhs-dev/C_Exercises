/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strspn.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ohamadou <ohamadou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/07 16:59:05 by ohamadou          #+#    #+#             */
/*   Updated: 2024/01/07 17:23:45 by ohamadou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

char *ft_strchr(const char *str, int c)
{
	while (*str)
	{
		if (*str == c)
			return ((char *)str);
		++str;
	}
	return (0);
}

size_t	ft_strspn(const char *s, const char *accept)
{
	size_t i = 0;

	while (s[i])
	{
		if (ft_strchr(accept, s[i]) == 0)
			break ;
		++i;
	}
	return (i);
}

int main () {
   int len;
   const char str1[] = "ABCDEFG019874";
   const char str2[] = "ABCDEF";

   len = ft_strspn(str1, str2);

   printf("Length of initial segment matching %d\n", len );
   
   return(0);
}
