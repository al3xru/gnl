/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccumming <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/24 14:43:38 by ccumming          #+#    #+#             */
/*   Updated: 2018/12/05 13:16:00 by ccumming         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strstr(const char *str, const char *to_find)
{
	int i;
	int j;

	i = 0;
	if (ft_strlen(str) == ft_strlen(to_find) && ft_strlen(str) == 0)
		return ((char *)str);
	while (str[i])
	{
		j = 0;
		while (str[i + j] == to_find[j] && to_find[j] && str[i + j])
			j++;
		if (!to_find[j])
			return ((char *)str + i);
		i++;
	}
	return (0);
}
