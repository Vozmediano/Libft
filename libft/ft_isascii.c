/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cvozmedi <cvozmedi@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/15 12:42:54 by cvozmedi          #+#    #+#             */
/*   Updated: 2023/10/05 15:47:40 by cvozmedi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isascii(int c)
{
	if (c >= 0 && c <= 127)
		return (1);
	return (0);
}
/*
#include <stdio.h>

int main()
{
   char cadena[] = ";0ñsáR(h&~?RÛ1/";
   int i;

   i = 0;
   while(cadena[i])
   {
      printf("%c, %d\n", cadena[i], isascii(cadena[i]));
	  i++;
   }
   return 0;
}

int main()
{
   char cadena[] = ";0ñsáR(h&~?RÛ1/";
   int i;

   i = 0;
   while(cadena[i])
   {
      printf("%c, %d\n", cadena[i], ft_isascii(cadena[i]));
	  i++;
   }
   return 0;
}
*/