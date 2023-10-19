/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cvozmedi <cvozmedi@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/26 16:21:36 by cvozmedi          #+#    #+#             */
/*   Updated: 2023/10/18 13:26:04 by cvozmedi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *str, size_t n)
{
	size_t	i;

	i = 0;
	while (i < n)
	{
		((char *)str)[i] = 0;
		i++;
	}
}
/*
#include <stdio.h>

int main()
{
	char str[] = "hello, world!";
	printf("antes: %s\n", str);
	ft_bzero(str, 5);
	printf("despues: %s\n", str);
	return(0);
}
*/