/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmeda <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/08 18:21:26 by gmeda             #+#    #+#             */
/*   Updated: 2019/09/18 19:21:04 by gmeda            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strncat(char *dest, const char *src, size_t n)
{
	int		j;
	size_t	i;

	j = 0;
	i = 0;
	while (dest[j])
		j++;
	while (src[i] && (i < n))
		dest[j++] = src[i++];
	dest[j] = '\0';
	return (dest);
}
