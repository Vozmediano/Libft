/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cvozmedi <cvozmedi@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/27 12:09:26 by cvozmedi          #+#    #+#             */
/*   Updated: 2023/10/09 15:55:16 by cvozmedi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	i;
	size_t	j;
	size_t	sp;

	i = 0;
	j = 0;
	sp = 0;
	while (dst[i] != '\0')
		i++;
	while (src[sp] != '\0')
		sp++;
	if (dstsize <= i)
		sp = dstsize + sp;
	else
		sp = sp + i;
	while (src[j] != '\0' && (i + 1) < dstsize)
	{
		dst[i] = src[j];
		i++;
		j++;
	}
	dst[i] = '\0';
	return (sp);
}
/*
#include <stdio.h>
#include <string.h>

int main()
{
    char dest[20] = "Hel";
    const char src[] = "Wor";
    size_t dest_size = sizeof(dest);

    size_t result = ft_strlcat(dest, src, dest_size);
	//size_t result = strlcat(dest, src, dest_size);

    printf("String concatenado: %s\n", dest);
    printf("Total: %zu\n", result);

    return 0;
}
*/