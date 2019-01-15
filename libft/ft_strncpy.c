/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccumming <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/22 19:32:48 by ccumming          #+#    #+#             */
/*   Updated: 2018/11/27 17:24:41 by ccumming         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char		*ft_strncpy(char *dst, const char *src, size_t n)
{
	size_t		pos;

	pos = 0;
	while (src[pos] && pos < n)
	{
		dst[pos] = src[pos];
		pos++;
	}
	while (pos < n)
	{
		dst[pos] = '\0';
		pos++;
	}
	return (dst);
}
