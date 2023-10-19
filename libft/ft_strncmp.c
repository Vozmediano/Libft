/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cvozmedi <cvozmedi@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/26 15:19:06 by cvozmedi          #+#    #+#             */
/*   Updated: 2023/10/09 16:26:05 by cvozmedi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	unsigned int	i;

	i = 0;
	while (i < n && (s1[i] && s2[i]))
	{
		if (s1[i] != s2[i])
			return ((unsigned char)s1[i] - (unsigned char)s2[i]);
		i++;
	}
	if (i < n && ((s1[i] == '\0' && s2[i] != '\0')
			|| (s1[i] != '\0' && s2[i] == '\0')))
		return ((unsigned char)s1[i] - (unsigned char)s2[i]);
	return (0);
}
/*
int main()
{
	char ptrs1[] = "asefg";
	char ptrs2[] = "asdfghjkl";

	printf("%d\n", ft_strncmp(ptrs1, ptrs2, 5));
	printf("%d\n", strncmp(ptrs1, ptrs2, 5));
	return (0);
}

int main()
{
    const char *str1 = "Hello, World!";
    const char *str2 = "Hello, Universe!";
    size_t n = 8;

    int result = ft_strncmp(str1, str2, n);

    printf("str1: %s\n", str1);
    printf("str2: %s\n", str2);
    printf("Comparison result: %d\n", result);

    return 0;
}
*/
