/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccumming <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/26 09:27:11 by ccumming          #+#    #+#             */
/*   Updated: 2018/11/26 09:33:58 by ccumming         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char		*ft_strtrim(char const *s)
{
	int		i;
	int		len;
	char	*fresh;

	if (!s)
		return (NULL);
	len = ft_strlen(s);
	while (ft_isspace(s[len - 1]))
		len--;
	i = -1;
	while (ft_isspace(s[++i]))
		len--;
	if (len <= 0)
		len = 0;
	if (!(fresh = ft_strnew(len)))
		return (NULL);
	s += i;
	i = -1;
	while (++i < len)
		fresh[i] = *s++;
	fresh[i] = '\0';
	return (fresh);
}
