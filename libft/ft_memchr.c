/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccumming <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/24 11:41:02 by ccumming          #+#    #+#             */
/*   Updated: 2018/11/27 17:32:28 by ccumming         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void		*ft_memchr(const void *arr, int c, size_t n)
{
	unsigned char			*temp;

	temp = (unsigned char *)arr;
	while (n--)
	{
		if (*temp == (unsigned char)c)
			return (void *)temp;
		temp++;
	}
	return (NULL);
}
