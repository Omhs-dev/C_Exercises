/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strpbrk.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ohamadou <ohamadou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/17 21:04:15 by ohamadou          #+#    #+#             */
/*   Updated: 2024/01/17 21:17:57 by ohamadou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// char *ft_strchr(const char *str, char c)
// {
// 	int i = 0;

// 	while (str[i])
// 	{
// 		if (str[i] == c)
// 			return (char *)str;
// 		i++;
// 	}
// 	return (0);
// }

char	*ft_strpbrk(const char *s1, const char *s2)
{
	int i;

	while (*s1)
	{
		i = 0;
		while (s2[i])
		{
			if (*s1 == s2[i])
				return ((char *)s1);
			i++;
		}
		s1++;
	}
	return (0);
}

#include <stdio.h>
#include <string.h>

int main () {
   const char str1[] = "abcde2fghi3jk4l";
   const char str2[] = "34";
   char *ret;

   ret = strpbrk(str1, str2);
   if(ret) {
      printf("First matching character: %c\n", *ret);
   } else {
      printf("Character not found");
   }
   
   return(0);
}
