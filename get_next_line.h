/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccumming <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/11 13:24:53 by ccumming          #+#    #+#             */
/*   Updated: 2019/01/15 18:18:54 by ccumming         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef		GET_N_L
# define	GET_N_L
# define	BUFF_SIZE 5
# include 	"libft/libft.h"
# include	<fcntl.h>
int		get_next_line(const int fd, char **line);
#endif
