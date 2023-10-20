/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cvozmedi <cvozmedi@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/16 14:42:41 by cvozmedi          #+#    #+#             */
/*   Updated: 2023/10/16 14:52:13 by cvozmedi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	int		i;
	char	*buffer;

	i = 0;
	while (s[i])
		i++;
	buffer = (char *)malloc(i + 1);
	if (buffer == NULL)
		return (NULL);
	i = 0;
	while (s[i])
	{
		buffer[i] = (*f)(i, s[i]);
		i++;
	}
	buffer[i] = 0;
	return (buffer);
}
/*
#include <stdio.h>

static char transform_char(unsigned int index, char c)
{
	if (index % 2 == 0)
        return (ft_toupper(c));
    else
        return (ft_tolower(c));
}
int main()
{
    const char *original = "Hello, World!";

    char *modified = ft_strmapi(original, transform_char);

    printf("Original string: %s\n", original);
    printf("Modified string: %s\n", modified);

    free(modified);

    return 0;
}
*/
