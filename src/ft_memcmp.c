/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcelojev <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/29 14:26:02 by dcelojev          #+#    #+#             */
/*   Updated: 2019/04/29 16:26:44 by dcelojev         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	int				i;
	unsigned char	c1;
	unsigned char	c2;

	if (n == 0 || s1 == s2)
		return (0);
	i = -1;
	while (++i < (int)n)
	{
		c1 = ((char *)s1)[i];
		c2 = ((char *)s2)[i];
		if (c1 != c2)
			break ;
	}
	return (c1 - c2);
}
