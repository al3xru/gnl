/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccumming <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/15 19:10:24 by ccumming          #+#    #+#             */
/*   Updated: 2019/01/16 15:03:07 by ccumming         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

char		*get_word(char *s, char d)
{
	int		i;
	char	*result;

	result = ft_strnew(ft_strlen(s) + 1);

	return (result);
}


int			get_next_line(const int fd, char **line)
{
	static t_list		list;
	int					ret;
	char				buff[BUFF_SIZE];

	if (fd < 0)
	{
		ft_putstr("Can't open file...");
		return (-1);
	}

	list.content = "\0";
	ft_putstr(list.content);
	while ((ret = read(fd, buff, BUFF_SIZE)) > 0)
	{
		// copy our buffer to list->content
		list.content = ft_strjoin(list.content, buff);
		// now we check \n in our buffer, if found we stop our cycle.
		if ((ft_strchr(buff, '\n')))
			break;
		//ft_putstr(list.content);
		//ft_putstr(buff);
		// clear our buffer for next iteration.
		ft_strclr(buff);
		//ft_strclr(list.content);
	}
	
	// check to end of file 
	if ((ret < BUFF_SIZE) == ft_strlen(list.content))
		return (0);

	// now, we need to copy our string from list until \n to LINE
	




	// 1 - line has been read, 0 - file has been read, -1 - error
	return (0);
}
