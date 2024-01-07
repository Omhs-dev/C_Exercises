/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ohamadou <ohamadou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/06 20:36:02 by ohamadou          #+#    #+#             */
/*   Updated: 2024/01/06 20:56:20 by ohamadou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int ft_strlen(char *str)
{
	int i = 0;
	
	while (str[i])
		i++;
	return (i);
}

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

char    *ft_strdup(char *src)
{
	char *dup;
	int len;
	
	len = ft_strlen(src);
	dup = (char *)malloc(sizeof(char) * (len + 1));
	if (!dup)
		return (NULL);
	ft_strcpy(dup, src);
	return (dup);
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
