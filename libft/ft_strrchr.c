/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cvozmedi <cvozmedi@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/03 18:05:15 by cvozmedi          #+#    #+#             */
/*   Updated: 2023/10/13 19:56:56 by cvozmedi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int	i;

	i = 0;
	while (s[i])
		i++;
	while (i >= 0)
	{
		if (s[i] == (char)c)
			return ((char *)(s + i));
		i--;
	}
	return (NULL);
}
/*
#include <stdio.h>
#include <string.h>

int main()
{
	const char *str = "Hello, World!";
	int character_to_find = 'o';

	char *result = ft_strrchr(str, character_to_find);
	//char *result = strrchr(str, character_to_find);

	if (result != NULL)
		printf("Ultima ocurrencia de '%c' encontrada en la posicion: %s\n", 
			character_to_find, result);
	else
		printf("Char '%c' no encontrado en el string.\n", character_to_find);

	return 0;
}
*/