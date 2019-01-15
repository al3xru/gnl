/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrev.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccumming <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/28 21:21:44 by ccumming          #+#    #+#             */
/*   Updated: 2018/11/28 21:21:58 by ccumming         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char			*ft_strrev(char *str)
{
	int		length;
	int		a;
	int		b;
	char	new_word;

	length = 0;
	while (str[length] != '\0')
	{
		length++;
	}
	b = 0;
	a = length - 1;
	while (b < a)
	{
		new_word = str[b];
		str[b] = str[a];
		str[a] = new_word;
		b++;
		a--;
	}
	return (str);
}
