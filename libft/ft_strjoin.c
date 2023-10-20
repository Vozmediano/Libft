/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cvozmedi <cvozmedi@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/13 19:26:05 by cvozmedi          #+#    #+#             */
/*   Updated: 2023/10/13 20:22:52 by cvozmedi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*str;
	size_t	i;
	size_t	j;

	str = (char *)malloc(
			sizeof(*s1) * (ft_strlen(s1) + ft_strlen(s2) + 1));
	if (!str)
		return (NULL);
	i = 0;
	j = 0;
	while (s1[i])
	{
		str[j++] = s1[i];
		i++;
	}
	i = 0;
	while (s2[i])
	{
		str[j++] = s2[i];
		i++;
	}
	str[j] = 0;
	return (str);
}
/*
#include <stdio.h>

int main()
{
    const char *s1 = "Hola, ";
    const char *s2 = "mundo!";
    char *result = ft_strjoin(s1, s2);

    if (result != NULL)
    {
		printf("Cadenas concatenadas: %s\n", result);
        free(result);
    }
    else
        printf("Error al concatenar cadenas.\n");

    return 0;
}
*/
