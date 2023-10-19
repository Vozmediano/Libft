/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cvozmedi <cvozmedi@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/23 18:29:32 by cvozmedi          #+#    #+#             */
/*   Updated: 2023/10/09 16:13:00 by cvozmedi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
	size_t	i;

	i = 0;
	while (*src != '\0' && i + 1 < dstsize)
	{
		*dst++ = *src++;
		i++;
	}
	if (i < dstsize)
		*dst = 0;
	while (*src++ != '\0')
		i++;
	return (i);
}
/*
#include <stdio.h>
int main()
{
    char src[] = "Hello, World!";
    char dst[2];

    size_t result = ft_strlcpy(dst, src, sizeof(dst));

    printf("Source: %s\n", src);
    printf("Destination: %s\n", dst);
    printf("Result: %zu\n", result);

    return 0;
}
*/