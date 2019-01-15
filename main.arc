/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccumming <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/15 16:00:08 by ccumming          #+#    #+#             */
/*   Updated: 2019/01/15 17:10:00 by ccumming         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <fcntl.h>
#include "libft/libft.h"
#include "get_next_line.h"


// Function get substring used delimeter S.
char		*get_substring(char *s, char d)
{
	char	*result;
	char	*output;
	int		pos;
	// allocate memmory for our string.
	result = ft_strnew(ft_strlen(s));
	pos = 0;
	// get our string until delimeter.
	while (s)
	{
		if (*s == d)
		{
			result[pos] = '\0';
			break;
		}
		result[pos] = *s;
		pos++;
		s++;
	}
	return (result);
}

int			check_end_line(char *s, char d)
{
	while (s)
	{
		if (*s == d)
			return (1);
		s++;
	}
	return (0);
}

void		show_line(int fd)
{
	char 	*buf;
	int		ret;
	char	*line;

	buf = ft_strnew(BUFF_SIZE);
	while ((ret = read(fd, buf, BUFF_SIZE) > 0))
	{
		// here write code to find \n and show.
		if (check_end_line(buf, '\n') == 1)
		{
		//	ft_putstr(buf);
			ft_putstr(get_substring(buf, '\n'));
			ft_putstr("\n\nexit here \n");
			break;
		}
	}
}

void		show_file(int fd)
{
	char 	*buf;
	int		ret;

	buf = ft_strnew(BUFF_SIZE);
	while ((ret = read(fd, buf, BUFF_SIZE) > 0))
	{
		ft_putstr(buf);
		ft_strclr(buf);
	}
}

int			main(void)
{
	int 	fd;
	int 	ret;
	char 	*buf;
	ft_putstr("Hello, this is test \n");
	// open our file
	fd = open("test.txt", O_RDONLY);
	if (fd < 0)
		ft_putstr("Can't open file :( \n");
	if (fd > 0)
		ft_putstr("File has been opened \n");
	ft_putchar('\n');
	// show full file...
	//show_file(fd);
	
	// show first line from file
	show_line(fd);
	return (0);
}
