/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccumming <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/26 14:15:21 by ccumming          #+#    #+#             */
/*   Updated: 2018/11/26 14:16:27 by ccumming         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr_fd(int nb, int fd)
{
	if (nb == -2147483648)
	{
		ft_putchar_fd('-', fd);
		ft_putchar_fd(2 + '0', fd);
		ft_putnbr_fd(147483648, fd);
		return ;
	}
	if (nb < 0)
	{
		ft_putchar_fd('-', fd);
		nb *= -1;
	}
	if (nb > 9)
	{
		ft_putnbr_fd(nb / 10, fd);
		ft_putnbr_fd(nb % 10, fd);
	}
	else
		ft_putchar_fd(nb + '0', fd);
}
