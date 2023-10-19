/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cvozmedi <cvozmedi@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/06 10:31:04 by cvozmedi          #+#    #+#             */
/*   Updated: 2023/10/06 11:39:31 by cvozmedi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	void	*ptr;

	ptr = malloc(count * size);
	if (ptr == NULL)
		return (NULL);
	ft_bzero(ptr, count * size);
	return (ptr);
}
/*
#include <stdio.h>

int main()
{
	size_t	count;
	size_t	size;
	void	*arrang;

	count = 10;
	size = sizeof(int);
	arrang = ft_calloc(count, size);
	if (!arrang)
		return (1);
	free(arrang);
	return(0);
}
*/