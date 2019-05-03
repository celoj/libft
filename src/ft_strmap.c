/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcelojev <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/01 12:36:57 by dcelojev          #+#    #+#             */
/*   Updated: 2019/05/02 15:32:08 by dcelojev         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmap(char const *s, char (*f)(char))
{
	int		i;
	char	*result;

	result = 0;
	if (s && f)
	{
		i = -1;
		result = 0;
		if (!(result = ft_strnew(ft_strlen(s))))
			return (0);
		while (s[++i])
			result[i] = f(s[i]);
	}
	return (result);
}
