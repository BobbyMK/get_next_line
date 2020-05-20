/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmeda <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/12 19:20:37 by gmeda             #+#    #+#             */
/*   Updated: 2019/09/19 16:15:33 by gmeda            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t			i;
	unsigned char	*ptr;
	unsigned char	*str;

	if (n == 0)
		return (0);
	ptr = (unsigned char*)s1;
	str = (unsigned char*)s2;
	i = 0;
	while (*ptr == *str && ++i < n)
	{
		ptr++;
		str++;
	}
	return ((int)(*ptr - *str));
}
