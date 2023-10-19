/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cvozmedi <cvozmedi@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/14 14:58:31 by cvozmedi          #+#    #+#             */
/*   Updated: 2023/10/05 15:46:43 by cvozmedi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalpha(int c)
{
	if ((c >= 65 && c <= 90) || (c >= 97 && c <= 122))
		return (1);
	return (0);
}
/*
#include <stdio.h>

int main()
{
	char cadena[] = ";0sR(h&R1/";
	int i;
	i = 0;
	while (cadena[i] != '\0')
	{
		printf("%c, %d\n", cadena[i], ft_isalpha(cadena[i]));
		i++;
	}
	return(0);
}

int main()
{
   char cadena[] = ";0sR(h&R1/";
   int i;
   
   i = 0;
   while (cadena[i] != '\0')
   {
	printf("%c, %d\n", cadena[i], isalpha(cadena[i]));
	i++;
   }
   return 0;
}
*/