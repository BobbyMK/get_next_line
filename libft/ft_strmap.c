/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmeda <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/18 14:15:27 by gmeda             #+#    #+#             */
/*   Updated: 2019/09/20 18:47:42 by gmeda            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmap(char const *s, char (*f)(char))
{
	char	*ptr1;
	char	*ptr2;
	char	*res;

	if (!s || !(res = ft_memalloc((size_t)ft_strlen((char*)s) + 1)))
		return (NULL);
	ptr1 = (char*)s;
	ptr2 = res;
	while (*ptr1)
		*(ptr2++) = f(*(ptr1++));
	return (res);
}
