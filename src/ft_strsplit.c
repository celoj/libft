/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcelojev <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/01 15:44:26 by dcelojev          #+#    #+#             */
/*   Updated: 2019/05/02 21:42:10 by dcelojev         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	counttokens(char const *s, char delimiter)
{
	int		i;
	size_t	tokens;

	i = 0;
	tokens = 0;
	while (s[i])
	{
		while (s[i] && s[i] == delimiter)
			i++;
		if (s[i])
			tokens++;
		while (s[i] && s[i] != delimiter)
			i++;
	}
	return (tokens);
}

static size_t	getnexttokenlen(char const *s, char delimiter, size_t start)
{
	size_t length;

	length = start;
	while (s[length] && s[length] != delimiter)
		length++;
	return (length - start);
}

char			**ft_strsplit(char const *s, char c)
{
	int		i;
	size_t	s_index;
	size_t	token_index;
	size_t	token_count;
	char	**tokens;

	if (!s)
		return (NULL);
	token_count = counttokens(s, c);
	if (!(tokens = (char **)malloc((token_count + 1) * sizeof(char *))))
		return (0);
	tokens[token_count] = 0;
	token_index = -1;
	s_index = 0;
	while (++token_index < token_count)
	{
		while (s[s_index] == c)
			s_index++;
		if (!(tokens[token_index] = ft_strnew(getnexttokenlen(s, c, s_index))))
			return (0);
		i = 0;
		while (s[s_index] != c)
			tokens[token_index][i++] = s[s_index++];
	}
	return (tokens);
}
