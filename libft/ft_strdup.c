/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cvozmedi <cvozmedi@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/13 18:45:47 by cvozmedi          #+#    #+#             */
/*   Updated: 2023/10/13 19:17:47 by cvozmedi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s)
{
	char	*result;
	int		len;
	int		i;

	len = ft_strlen(s);
	result = ft_calloc(1, len + 1);
	if (result == NULL)
		return (NULL);
	i = 0;
	while (i < len)
	{
		result[i] = s[i];
		i++;
	}
	return (result);
}
/*
int main(void)
{
	char* ptr = "hola";
	char* result = ft_strdup(ptr);
	printf("%s\n", result);
}
*/
