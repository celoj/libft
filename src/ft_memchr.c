/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcelojev <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/29 14:04:46 by dcelojev          #+#    #+#             */
/*   Updated: 2019/05/01 22:18:44 by dcelojev         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	int i;

	i = -1;
	while (++i < (int)n)
		if (((unsigned char *)s)[i] == (unsigned char)c)
			return ((void *)(s + i));
	return (NULL);
}
