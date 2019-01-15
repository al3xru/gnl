/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccumming <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/26 08:35:36 by ccumming          #+#    #+#             */
/*   Updated: 2018/11/26 08:59:22 by ccumming         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char		*ft_strmap(char const *s, char (*f)(char))
{
	int		i;
	char	*fresh;

	if (!s)
		return (NULL);
	if (!(fresh = ft_strnew(ft_strlen(s))))
		return (NULL);
	i = -1;
	while (s[++i])
		fresh[i] = f(s[i]);
	fresh[i] = '\0';
	return (fresh);
}
