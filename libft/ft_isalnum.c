/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cvozmedi <cvozmedi@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/15 12:35:32 by cvozmedi          #+#    #+#             */
/*   Updated: 2023/10/06 12:31:45 by cvozmedi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalnum(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z')
		|| (c >= '0' && c <= '9'))
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
   while (cadena[i])
   { 
      printf("%c, %d\n", cadena[i], ft_isalnum(cadena[i]));
      //printf("%c, %d\n", cadena[i], isalnum(cadena[i]));
	  i++;
   }
   return 0;
}
*/