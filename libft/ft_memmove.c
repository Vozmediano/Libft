/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cvozmedi <cvozmedi@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/27 15:27:29 by cvozmedi          #+#    #+#             */
/*   Updated: 2023/10/05 15:53:23 by cvozmedi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *str1, const void *str2, size_t n)

{
	char	*dest;
	char	*src;

	dest = (char *)str1;
	src = (char *)str2;
	if (dest == src)
		return (dest);
	if (dest < src || dest >= (src + n))
	{
		while (n--)
			*dest++ = *src++;
	}
	else
	{
		dest += n;
		src += n;
		while (n--)
			*(--dest) = *(--src);
	}
	return (str1);
}
/*
#include <stdio.h>
#include <string.h>

int main() {
    char str[] = "Hello, World!";
    char buffer[20];

    size_t move_size = 4;

    ft_memmove(buffer, str, move_size);
	//memmove(buffer, str, move_size);

    printf("Original string: %s\n", str);
    printf("Buffer after move: %s\n", buffer);

    return 0;
}
*/