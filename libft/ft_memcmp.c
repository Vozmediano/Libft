/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cvozmedi <cvozmedi@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/04 15:22:58 by cvozmedi          #+#    #+#             */
/*   Updated: 2023/10/05 15:52:04 by cvozmedi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t	i;

	i = 0;
	while (i < n)
	{
		if (*(unsigned char *)(s1 + i) != *(unsigned char *)(s2 + i))
			return (*(unsigned char *)(s1 + i) - *(unsigned char *)(s2 + i));
		i++;
	}
	return (0);
}
/*
#include <stdio.h>

int main()
{
    char str1[] = "Hello, World!";
    char str2[] = "Hello, Code!";
    size_t compare_size = 8;

    int result = ft_memcmp(str1, str2, compare_size);

    if (result < 0)
        printf("str1 es menor que str2\n");
	else if (result > 0)
        printf("str1 es mayor que str2\n");
    else
        printf("str1 es igual que str2\n");

    return 0;
}
*/