/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   do_op.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ohamadou <ohamadou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/05 17:38:06 by ohamadou          #+#    #+#             */
/*   Updated: 2024/01/05 17:48:39 by ohamadou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

void do_op(char *str, char c, char *str2)
{
	if (c == '+')
		printf("%d", atoi(str) + atoi(str2));
	if (c == '-')
		printf("%d", atoi(str) - atoi(str2));
	if (c == '*')
		printf("%d", atoi(str) * atoi(str2));
	if (c == '/')
		printf("%d", atoi(str) / atoi(str2));
	if (c == '%')
		printf("%d", atoi(str) % atoi(str2));
}

int main(int argc, char *argv[])
{
	if (argc == 4)
		do_op(argv[1], argv[2][0], argv[3]);
	printf("\n");
	return (0);
}
