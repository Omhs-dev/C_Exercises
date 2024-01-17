/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strspn.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ohamadou <ohamadou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/17 21:21:27 by ohamadou          #+#    #+#             */
/*   Updated: 2024/01/17 21:41:17 by ohamadou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h> 
#include <string.h>

char *ft_strchr(const char *s, char c)
{
	while (*s)
	{
		if (*s == c)
			return ((char *)s);
		++s;
	}
	return (0);
}

size_t	ft_strspn(const char *s, const char *accept)
{
	size_t i;

	i = 0;
	while (s[i])
	{
		if (!ft_strchr(accept, s[i]))
			break ;
		++i;
	}
	return (i);
}

// C program to illustrate strspn() function 

int main () { 
	int len = ft_strspn("geeks for geeks","geek"); 
	printf("Length of initial segment matching : %d\n", len );	 
	return(0); 
} 
