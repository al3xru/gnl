/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccumming <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/22 17:32:03 by ccumming          #+#    #+#             */
/*   Updated: 2018/11/27 17:26:35 by ccumming         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char		*ft_strncat(char *dest, const char *src, size_t n)
{
	int		size_dest;
	size_t	size_src;

	size_dest = 0;
	size_src = 0;
	while (dest[size_dest] != '\0')
		size_dest++;
	while (size_src < n && src[size_src] != '\0')
	{
		dest[size_dest + size_src] = src[size_src];
		size_src++;
	}
	dest[size_dest + size_src] = '\0';
	return (dest);
}
