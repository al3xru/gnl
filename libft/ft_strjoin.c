/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccumming <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/26 09:17:15 by ccumming          #+#    #+#             */
/*   Updated: 2018/11/26 09:22:29 by ccumming         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char		*ft_strjoin(char const *s1, char const *s2)
{
	char	*fresh;
	int		i;
	int		next;

	if (!s1 || !s2)
		return (NULL);
	if (!(fresh = ft_strnew(ft_strlen(s1) + ft_strlen(s2))))
		return (NULL);
	i = 0;
	while (s1[i])
	{
		fresh[i] = s1[i];
		i++;
	}
	next = i;
	i = 0;
	while (s2[i])
	{
		fresh[next] = s2[i];
		i++;
		next++;
	}
	fresh[next] = '\0';
	return (fresh);
}
