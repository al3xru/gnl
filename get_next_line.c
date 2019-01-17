/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccumming <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/15 19:10:24 by ccumming          #+#    #+#             */
/*   Updated: 2019/01/17 16:11:21 by ccumming         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

// f() return rest of the string
char		*get_rest_s(char *s, char d)
{
	int		i;
	int		flag;
	char	*result;

	result = ft_strnew(ft_strlen(s) + 1);
	i = 0;
	flag = 0;
	while (*s != '\0')
	{
		if (*s != d && flag == 0)
			s++;
		else
		{
			flag = 1;
			s++;
		}
		if (flag == 1)
		{
			result[i] = *s;
			i++;
			s++;
		}
	}
	return (result);
}


// this f() return word until our delimeter
char		*get_word(char *s, char d)
{
	int		i;
	char	*result;
	char	*s_temp;

	*s_temp = *s;
	result = ft_strnew(ft_strlen(s_temp) + 1);
	i = 0;
	while (*s_temp != '\0')
	{
		if (*s_temp != d)
		{
			result[i] = *s_temp;
			//ft_putchar(*s);
			s_temp++;
			i++;
		} else 
			break;
	}
	result[i] = '\0';
	return (result);
}


int			get_next_line(const int fd, char **line)
{
	static t_list		list;
	int					ret;
	char				buff[BUFF_SIZE + 1];
	void				*temp;

	if (fd < 0)
	{
		ft_putstr("Can't open file...");
		return (-1);
	}

	if (list.content == NULL)
		list.content = "";
	//ft_putstr(list.content);
	while ((ret = read(fd, buff, BUFF_SIZE)) > 0)
	{
		buff[ret] = '\0';
		// added new text from buffer to static memory
		temp = list.content;
		list.content = ft_strjoin(temp, buff);
		ft_putchar('\n');
		ft_putstr("ITER:");
		ft_putstr(list.content);
		ft_putchar('\n');
		// check \n in our buff, if found -> stop.
		if ((ft_strchr(buff, '\n')))
			break;
	}
	// check for end of file
	if ((ret < BUFF_SIZE)  && ft_strlen(list.content) == 0)
		return (0);

	// get line from our static memory and save it in line
	temp = list.content;
	//ft_putstr("WORD");
	//ft_putstr(get_word(temp, '\n'));
	//ft_putchar('\n');
	//*line = ft_strdup(get_word(temp, '\n'));
	*line = "WOW";
	// change our cursor to next \n + 1 in our static buffer
	temp = list.content;
	list.content = ft_strdup(ft_strchr(temp, '\n') + 1);
	ft_putchar('\n');
	ft_putstr("A:");
	ft_putstr(list.content);
	ft_putchar('\n');	
	
	// now, we need to copy our string from list until \n to LINE

	// 1 - line has been read, 0 - file has been read, -1 - error
	return (0);
}
