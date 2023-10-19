/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cvozmedi <cvozmedi@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/04 15:34:23 by cvozmedi          #+#    #+#             */
/*   Updated: 2023/10/13 20:02:49 by cvozmedi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	i;
	size_t	j;

	if (*needle == '\0')
		return ((char *)haystack);
	i = 0;
	while (haystack[i] && i < len)
	{
		j = 0;
		while (haystack[i + j] && needle[j] != '\0'
			&& i + j < len && haystack[i + j] == needle[j])
			j++;
		if (!needle[j])
			return ((char *)(haystack + i));
		i++;
	}
	return (NULL);
}
/*
#include <stdio.h>
#include <string.h>

int main()
{
    const char haystack[] = "Hello, World!";
    const char needle[] = "Wor";
    size_t len = 10;

    char *result = ft_strnstr(haystack, needle, len);

    if (result != NULL)
        printf("Needle se encontro en la posicion: %s\n", result);
    else
        printf("Needle no se encontro en haystack.\n");

    return 0;
}

int main()
{
    const char haystack[] = "Hello, World!";
    const char needle[] = "World";
    size_t len = 10;

	char *result = strnstr(haystack, needle, len);

    if (result != NULL)
		printf("%s\n", result);
    else
        printf("Needle no se encontro en haystack.\n");

    return 0;
}
*/