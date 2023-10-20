/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cvozmedi <cvozmedi@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/15 12:49:43 by cvozmedi          #+#    #+#             */
/*   Updated: 2023/10/05 15:49:52 by cvozmedi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isprint(int c)
{
	if (c >= 32 && c <= 126)
		return (1);
	return (0);
}
/*
#include <stdio.h>

int main()
{
   char cadena[] = ";0 ñ\003sáR(h &~?\177RÛ 1/";
   int i;

   i = 0;
   while(cadena[i])
   {
      printf("%c, %d\n", cadena[i], ft_isprint(cadena[i]));
      //printf("%c, %d\n", cadena[i], isprint(cadena[i]));
	  i++;
   }
   return 0;
}
*/