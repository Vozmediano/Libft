/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cvozmedi <cvozmedi@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/16 14:17:53 by cvozmedi          #+#    #+#             */
/*   Updated: 2023/10/16 14:41:04 by cvozmedi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_striteri(char *s, void (*f)(unsigned int, char*))
{
	unsigned int	i;

	i = 0;
	if (!s)
		return ;
	while (s[i] != '\0')
	{
		(*f)(i, (s + i));
		i++;
	}
}
/*
int main()
{
    char cadena[] = "Hola";
	
	ft_striteri(cadena, (void (*)(unsigned int, char *))putchar);
    return (0);
}
*/
