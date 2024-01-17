/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   do_op.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ohamadou <ohamadou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/17 20:20:09 by ohamadou          #+#    #+#             */
/*   Updated: 2024/01/17 20:28:23 by ohamadou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

void do_op(char *str1, char c, char *str2)
{
	if (c == '+')
		printf("%d", atoi(str1) + atoi(str2));
	else if (c == '-')
		printf("%d", atoi(str1) - atoi(str2));
	else if (c == '*')
		printf("%d", atoi(str1) * atoi(str2));
	else if (c == '/')
		printf("%d", atoi(str1) / atoi(str2));
	else if (c == '%')
		printf("%d", atoi(str1) % atoi(str2));
}

int main(int argc, char **argv)
{
	if (argc == 4 && !argv[2][1])
		do_op(argv[1], argv[2][0], argv[3]);
	printf("\n");
	return (0);
}
