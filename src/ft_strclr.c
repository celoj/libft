/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strclr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcelojev <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/01 12:08:05 by dcelojev          #+#    #+#             */
/*   Updated: 2019/05/01 12:31:31 by dcelojev         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_strclr(char *s)
{
	int strlen;

	if (s && *s)
	{
		strlen = ft_strlen(s);
		while (--strlen >= 0)
			s[strlen] = 0;
	}
}
