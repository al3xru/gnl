/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccumming <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/26 09:42:02 by ccumming          #+#    #+#             */
/*   Updated: 2018/12/03 15:08:32 by ccumming         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int		ft_length(int n)
{
	int			len;

	len = n < 0 ? 1 : 0;
	len += 2;
	while (n /= 10)
		len++;
	return (len);
}

char			*ft_itoa(int n)
{
	int			neg;
	int			len;
	char		*fresh;

	if (n == -2147483648)
		return (ft_strdup("-2147483648"));
	neg = 0;
	len = ft_length(n);
	if (n < 0)
	{
		n *= -1;
		neg = 1;
	}
	if (!(fresh = ft_strnew(len - 1)))
		return (NULL);
	fresh[--len] = '\0';
	while (len--)
	{
		fresh[len] = n % 10 + '0';
		n = n / 10;
	}
	if (neg)
		fresh[0] = '-';
	return (fresh);
}
