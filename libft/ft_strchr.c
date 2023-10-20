/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cvozmedi <cvozmedi@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/03 16:09:01 by cvozmedi          #+#    #+#             */
/*   Updated: 2023/10/16 15:34:53 by cvozmedi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	int	i;

	i = 0;
	while (s[i] != '\0')
	{
		if (s[i] == (char)c)
			return ((char *)(s + i));
		i++;
	}
	if (s[i] == (char)c)
		return ((char *)(s + i));
	if (c == '\0')
		return ((char *)(s + i));
	return (NULL);
}
/*
#include <stdio.h>
#include <string.h>

int main()
{
	const char cadena[] = "hola, ¿como estas?";
	int find = 'm';

	char *res = ft_strchr(cadena, find);
	//char *res = strchr(cadena, find);

	if (res != NULL)
		printf("El caracter '%c' se encuentra en: %s\n", find, res);
	else
		printf("El caracter '%c' no se encuentra\n", find);
	return (0);
}
*/