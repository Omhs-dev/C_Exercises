/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ohamadou <ohamadou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/17 20:56:06 by ohamadou          #+#    #+#             */
/*   Updated: 2024/01/17 21:03:54 by ohamadou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char *ft_strcpy(char *s1, char *s2)
{
	while (*s2)
	{
		*s1 = *s2;
		s1++;
		s2++;
	}
	*s1 = '\0';
	return (s1);
}

int ft_strlen(char *str)
{
	int i = 0;

	while (str[i])
		i++;
	return (i);
}

char    *ft_strdup(char *src)
{
	int len;
	char *mem;
	
	len = ft_strlen(src);
	mem = (char *)malloc(sizeof(char) * len + 1);
	if (!mem)
		return (NULL);
	ft_strcpy(mem, src);
	return (mem);
}

#include<stdio.h>
#include<string.h>
 
int main()
{
    char source[] = "GeeksForGeeks";
 
    // A copy of source is created dynamically
    // and pointer to copy is returned.
    char* target = ft_strdup(source); 
 
    printf("%s", target);
    return 0;
}
