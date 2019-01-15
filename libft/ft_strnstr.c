/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccumming <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/24 16:36:23 by ccumming          #+#    #+#             */
/*   Updated: 2018/12/05 13:16:35 by ccumming         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char			*ft_strnstr(const char *str, const char *to_find, size_t n)
{
	size_t		i;
	int			j;

	i = 0;
	if (ft_strlen(str) == ft_strlen(to_find) && ft_strlen(str) == 0)
		return ((char *)str);
	while (str[i] && i < n)
	{
		j = 0;
		while (str[i + j] == to_find[j]
				&& to_find[j] && str[i + j] && i + j < n)
			j++;
		if (!to_find[j])
			return ((char *)str + i);
		i++;
	}
	return (0);
}
