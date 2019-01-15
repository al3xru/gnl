/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccumming <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/22 19:23:27 by ccumming          #+#    #+#             */
/*   Updated: 2018/11/22 19:30:42 by ccumming         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strcpy(char *dst, const char *src)
{
	int		pos;

	pos = 0;
	while (src[pos] != '\0')
	{
		dst[pos] = src[pos];
		pos++;
	}
	dst[pos] = '\0';
	return (dst);
}
