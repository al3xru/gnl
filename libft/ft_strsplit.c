/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccumming <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/26 14:42:01 by ccumming          #+#    #+#             */
/*   Updated: 2018/12/01 18:48:41 by ccumming         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_count_words(char const *s, char c)
{
	int		words;
	int		word;

	words = 0;
	word = 0;
	while (*s != '\0')
	{
		if (word == 1 && *s == c)
			word = 0;
		if (word == 0 && *s != c)
		{
			word = 1;
			words++;
		}
		s++;
	}
	return (words);
}

static int	ft_word_len(const char *s, char c)
{
	int		len;

	len = 0;
	while (*s != c && *s != '\0')
	{
		len++;
		s++;
	}
	return (len);
}

static void	ft_clean(char **result)
{
	size_t	i;

	i = 0;
	while (result[i])
	{
		free(result[i]);
		i++;
	}
	free(result);
}

char		**ft_strsplit(char const *s, char c)
{
	char		**result;
	int			words;
	int			elem;

	if (!s)
		return (NULL);
	elem = 0;
	words = ft_count_words(s, c);
	if (!(result = (char **)malloc(sizeof(*result) * (words + 1))))
		return (NULL);
	while (words--)
	{
		while (*s == c && *s != '\0')
			s++;
		result[elem] = ft_strsub(s, 0, ft_word_len(s, c));
		if (result[elem] == NULL)
		{
			ft_clean(result);
			return (NULL);
		}
		s = s + ft_word_len(s, c);
		elem++;
	}
	result[elem] = NULL;
	return (result);
}
