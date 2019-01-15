/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccumming <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/22 17:59:15 by ccumming          #+#    #+#             */
/*   Updated: 2018/11/27 17:31:41 by ccumming         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void					*ft_memccpy(void *dst, const void *src, int c, size_t n)
{
	size_t				i;
	unsigned char		*temp_dst;
	const unsigned char	*temp_src;

	i = 0;
	temp_dst = (unsigned char *)dst;
	temp_src = src;
	while (i < n && n != 0)
	{
		temp_dst[i] = temp_src[i];
		if (temp_src[i] == (unsigned char)c)
			return (&dst[++i]);
		i++;
	}
	return (NULL);
}
