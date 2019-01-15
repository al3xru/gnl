/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsub.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccumming <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/26 09:07:33 by ccumming          #+#    #+#             */
/*   Updated: 2018/11/26 09:15:32 by ccumming         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char		*ft_strsub(char const *s, unsigned int start, size_t len)
{
	char	*fresh;
	int		i;

	if (!s)
		return (NULL);
	if (!(fresh = ft_strnew(len)))
		return (NULL);
	i = 0;
	while (len--)
	{
		fresh[i] = s[start + i];
		i++;
	}
	fresh[i] = '\0';
	return (fresh);
}
