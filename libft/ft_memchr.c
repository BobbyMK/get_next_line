/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmeda <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/12 19:08:11 by gmeda             #+#    #+#             */
/*   Updated: 2019/09/19 15:57:59 by gmeda            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	*s1;
	size_t			i;

	s1 = (unsigned char*)s;
	i = 0;
	while (++i <= n)
	{
		if (*(s1++) == (unsigned char)c)
			return ((void*)--s1);
	}
	return (NULL);
}
