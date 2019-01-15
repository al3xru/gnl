/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccumming <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/22 18:45:12 by ccumming          #+#    #+#             */
/*   Updated: 2018/11/27 17:27:22 by ccumming         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char		*ft_strchr(const char *s, int c)
{
	char	*temp_s;

	temp_s = (char *)s;
	while (*temp_s)
	{
		if (*temp_s == c)
			return (temp_s);
		temp_s++;
	}
	if (*temp_s == '\0' && c == '\0')
		return (temp_s);
	return (NULL);
}
