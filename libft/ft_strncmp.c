/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccumming <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/22 17:44:59 by ccumming          #+#    #+#             */
/*   Updated: 2018/12/05 12:58:55 by ccumming         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t		count;

	count = 0;
	if (n == 0)
		return (0);
	while (s1[count] != '\0' && s2[count] != '\0' && s1[count] == s2[count]
			&& count < n - 1)
		count++;
	return (((unsigned char)s1[count]) - (unsigned char)s2[count]);
}
