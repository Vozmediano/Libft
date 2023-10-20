/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cvozmedi <cvozmedi@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/15 12:17:01 by cvozmedi          #+#    #+#             */
/*   Updated: 2023/10/05 15:48:19 by cvozmedi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isdigit(int c)
{
	if (c >= '0' && c <= '9')
		return (1);
	return (0);
}
/*
#include <stdio.h>
#include <ctype.h>

int main()
{
   char cadena[] = "er&/v3=24-.?3ac";
   int i;

   i = 0;
   while (cadena[i] != '\0')
   {
		printf("%c, %d\n", cadena[i], ft_isdigit(cadena[i]));
      //printf("%c, %d\n", cadena[i], isdigit(cadena[i]));
		i++;
   }
   return 0;
}
*/