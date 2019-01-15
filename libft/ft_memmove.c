/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccumming <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/24 11:30:02 by ccumming          #+#    #+#             */
/*   Updated: 2018/11/27 17:30:31 by ccumming         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void						*ft_memmove(void *dst, const void *src, size_t n)
{
	unsigned char			*d;
	const unsigned char		*s;

	d = dst;
	s = src;
	if (s == d)
		return (dst);
	if (s < d)
	{
		s = s + n - 1;
		d = d + n - 1;
		while (n--)
			*d-- = *s--;
	}
	else
		while (n--)
			*d++ = *s++;
	return (dst);
}
