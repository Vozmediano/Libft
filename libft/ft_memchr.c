/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cvozmedi <cvozmedi@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/04 11:36:25 by cvozmedi          #+#    #+#             */
/*   Updated: 2023/10/05 15:51:40 by cvozmedi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	void	*res;

	res = NULL;
	while (n > 0 && res == NULL)
	{
		if (*((unsigned char *)s) == (unsigned char)c)
			res = (void *)s;
		s++;
		n--;
	}
	return (res);
}
/*
#include <stdio.h>
#include <string.h>

int main()
{
    const char *str = "Hello, World!";
    int search_char = 'W';
    size_t search_size = 4;

    void *result = ft_memchr(str, search_char, search_size);
    //void *result = memchr(str, search_char, search_size);

    if (result != NULL)
        printf("Char encontrado en posicion: %ld\n", (char *)result - str); 
	else
        printf("Char no encontrado.\n");

    return 0;
}
*/