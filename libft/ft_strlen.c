/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cvozmedi <cvozmedi@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/26 20:01:24 by cvozmedi          #+#    #+#             */
/*   Updated: 2023/10/05 16:05:31 by cvozmedi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlen(const char *s)
{
	size_t	c;

	c = 0;
	while (s[c] != '\0')
	{
		c++;
	}
	return (c);
}
/*
#include <stdio.h>

int main()
{
	char str[] = "hello world";

	printf("%d\n", ft_strlen(str));
	printf("%lu", strlen("hello world"));
	return(0);
}*/