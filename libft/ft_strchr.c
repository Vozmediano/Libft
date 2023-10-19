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
	while (s[i])
	{
		if (s[i] == (char)c)
			return ((char *)(s + i));
		i++;
	}
	if (s[i] == (char)c)
		return ((char *)(s + i));
	return (NULL);
}
/*
int main()
{
	const char cadena[] = "hola, ¿como estas?";
	int find = 'c';

	char *res = ft_strchr(cadena, find);

	if (res != NULL)
		printf("el caracter '%c' se encuentra en %s\n", find, res);
	else
		printf("el caracter '%c' no se encuentra\n", find);
	return (0);
}

int main()
{
	const char cadena[] = "hola, ¿como estas?";
	int find = 'z';

	char *res = strchr(cadena, find);

	if (res != NULL)
		printf("el caracter '%c' se encuentra en %s\n", find, res);
	else
		printf("el caracter '%c' no se encuentra\n", find);
	return (0);
}
*/
