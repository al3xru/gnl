/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memalloc.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccumming <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/24 17:43:52 by ccumming          #+#    #+#             */
/*   Updated: 2018/11/27 17:20:33 by ccumming         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void		*ft_memalloc(size_t size)
{
	char *memory;
	char *fill;

	if (!(memory = (char *)malloc(size)))
		return (NULL);
	fill = memory;
	while (size--)
		*fill++ = 0;
	return (memory);
}
