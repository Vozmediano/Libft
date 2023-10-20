/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cvozmedi <cvozmedi@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/16 13:56:47 by cvozmedi          #+#    #+#             */
/*   Updated: 2023/10/16 14:16:38 by cvozmedi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*subst;
	size_t	size;

	if (!s)
		return (NULL);
	if (start >= ft_strlen(s))
		return (ft_strdup(""));
	size = ft_strlen(s + start);
	if (size < len)
		len = size;
	subst = (char *)malloc(sizeof(char) * (len + 1));
	if (!subst)
		return (NULL);
	ft_strlcpy(subst, s + start, len + 1);
	return (subst);
}
/*
#include <stdio.h>

int main()
{
    const char *original = "Hola, mundo!";
    unsigned int inicio = 3;
    size_t longitud = 5;

	char *subcadena = ft_substr(original, inicio, longitud);

	if (subcadena != NULL)
	{
		printf("Subcadena: \"%s\"\n", subcadena);
		free(subcadena);
	}
	else
		printf("Error: No se pudo asignar memoria para la subcadena.\n");
	return (0);
}
*/
