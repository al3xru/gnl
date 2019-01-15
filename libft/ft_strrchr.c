/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccumming <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/22 18:53:36 by ccumming          #+#    #+#             */
/*   Updated: 2018/11/28 20:46:17 by ccumming         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char		*ft_strrchr(const char *s, int c)
{
	char	*temp_s;

	temp_s = (char *)s + ft_strlen(s);
	while (*temp_s != c)
	{
		if (temp_s == s)
			return (NULL);
		temp_s--;
	}
	return (temp_s);
}
