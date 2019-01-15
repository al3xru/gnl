/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccumming <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/15 19:10:24 by ccumming          #+#    #+#             */
/*   Updated: 2019/01/15 19:12:49 by ccumming         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

int			get_next_line(const int fd, char **line)
{
	if (fd < 0)
	{
		ft_putstr("Can't open file...");
		return (-1);
	}
	
	ft_putstr("start our work now...\n");


	// 1 - line has been read, 0 - file has been read, -1 - error
	return (0);
}
