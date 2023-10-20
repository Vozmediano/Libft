/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cvozmedi <cvozmedi@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/15 15:28:24 by cvozmedi          #+#    #+#             */
/*   Updated: 2023/10/05 15:53:54 by cvozmedi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *b, int c, size_t len)

{
	unsigned char	*s;
	size_t			i;

	i = 0;
	s = b;
	while (i < len)
	{
		s[i] = (unsigned char)c;
		i++;
	}
	return (b);
}
/*
#include <stdio.h>
#include <string.h>

int main() {
    char buffer[20];
    size_t buffer_size = sizeof(buffer);

	ft_memset(buffer, 'B', buffer_size);
    printf("Buffer después de ft_memset: %s\n", buffer);

    memset(buffer, 'A', buffer_size);
    printf("Buffer después de memset estándar: %s\n", buffer);

    return 0;
}
*/