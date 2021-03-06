/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtolower.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcelojev <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/03 13:14:27 by dcelojev          #+#    #+#             */
/*   Updated: 2019/05/03 13:21:16 by dcelojev         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtolower(char *s)
{
	int i;

	i = -1;
	while (s[++i])
		s[i] = ft_tolower(s[i]);
	return (s);
}
