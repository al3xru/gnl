/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccumming <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/11 13:26:29 by ccumming          #+#    #+#             */
/*   Updated: 2019/01/14 19:49:49 by ccumming         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <fcntl.h>
#include <unistd.h>
#include "get_next_line.h"
#include "libft/libft.h"
#include <stdio.h>

// функция выдергивает часть слова до символа
char	*get_word_before(char *src, int c)
{
	char	*ready;
	
	ready = ft_strnew(ft_strlen(src));

	while (*src != '\0' && *src != c)
	{
		//printf("\n1 %c\n", *src);
		ready = src;
		src++;
		ready++;
	}

	//printf("exit here = %s", ready);
	return (ready);
}

char	*get_word(char *src)
{
	char	*word;
	printf("WORK!");
	word = ft_strnew(ft_strlen(src));
	while (*src != '\0')
	{
		word = src;
		src++;
		word++;
		if (*src == '\n')
			break;
	}
	word = '\0';
	return (word);
}

int		get_next_line(const int fd, char **line)
{
	int				ret;
	char			temp[BUFF_SIZE + 1];
	static char 	old_buf[BUFF_SIZE + 1];
	char			*newword;
	// here we do our work
	// check error with FD.
	if (fd < 0)
	{
		ft_putstr("can't read file\n");
		return (-1); // can't read our file.
	}
	//printf("BUFF SIZE = %d\n", BUFF_SIZE);
	while ((ret = read(fd, temp, BUFF_SIZE)) > 0)
	{
		temp[ret] = '\0';
		if (ft_strchr(temp, '\n'))
		{
			//newword = get_word_before(temp, '\n');
			printf("\nNEW WORD = %s \n", get_word(temp));
			//printf("\nnew line FOUND! \n");
		}
		//ft_putstr((char const *)temp);
	}
	ft_putstr("\nThis is end of func");	
	// try to read first line of our fd


	return (1); // it's OK!
}
