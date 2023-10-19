/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cvozmedi <cvozmedi@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/05 13:23:33 by cvozmedi          #+#    #+#             */
/*   Updated: 2023/10/05 15:54:59 by cvozmedi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	long	num;

	num = n;
	if (num == -2147483648)
	{
		ft_putchar_fd('-', fd);
		ft_putchar_fd('2', fd);
		num = 147483648;
	}
	if (num < 0)
	{
		ft_putchar_fd('-', fd);
		num *= -1;
	}
	if ((num >= 0) && (num <= 9))
		ft_putchar_fd((num + 48), fd);
	else
	{
		ft_putnbr_fd((num / 10), fd);
		ft_putnbr_fd((num % 10), fd);
	}
}
/*
int main() {
    int number = 12345;
    int file_descriptor = 1;

    ft_putnbr_fd(number, file_descriptor);

    return 0;
}
*/