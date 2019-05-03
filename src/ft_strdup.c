/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcelojev <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/29 15:51:45 by dcelojev          #+#    #+#             */
/*   Updated: 2019/04/30 20:31:10 by dcelojev         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s1)
{
	int		i;
	char	*s;

	i = -1;
	if (!(s = (char *)ft_memalloc((ft_strlen(s1) + 1) * sizeof(char))))
		return (0);
	while (s1[++i])
		s[i] = s1[i];
	s[i] = '\0';
	return (s);
}
