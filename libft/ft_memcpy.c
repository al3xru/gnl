/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccumming <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/22 17:49:44 by ccumming          #+#    #+#             */
/*   Updated: 2018/11/22 17:55:45 by ccumming         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	size_t		i;
	char		*temp_dst;
	const char	*temp_src;

	i = 0;
	temp_dst = dst;
	temp_src = src;
	while (i < n)
	{
		temp_dst[i] = temp_src[i];
		i++;
	}
	return (dst);
}
