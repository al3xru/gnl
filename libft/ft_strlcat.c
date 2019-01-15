/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccumming <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/24 17:04:15 by ccumming          #+#    #+#             */
/*   Updated: 2018/11/27 17:27:06 by ccumming         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dest, const char *src, size_t size)
{
	size_t		size_dest;
	size_t		size_src;

	size_dest = 0;
	while (dest[size_dest] && size_dest < size)
		size_dest++;
	size_src = size_dest;
	while (src[size_dest - size_src] && size_dest < size - 1 && size != 0)
	{
		dest[size_dest] = src[size_dest - size_src];
		size_dest++;
	}
	if (size_src < size)
		dest[size_dest] = '\0';
	return (size_src + ft_strlen(src));
}
