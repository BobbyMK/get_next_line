/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strstr.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmeda <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/10 14:31:03 by gmeda             #+#    #+#             */
/*   Updated: 2019/09/19 16:26:00 by gmeda            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strstr(const char *str, const char *find)
{
	unsigned int	pos;
	unsigned int	i;

	if (!*find)
		return ((char*)str);
	pos = 0;
	while (str[pos] != '\0')
	{
		if (str[pos] == find[0])
		{
			i = 1;
			while (find[i] != '\0' && str[pos + i] == find[i])
				++i;
			if (find[i] == '\0')
				return ((char*)&str[pos]);
		}
		++pos;
	}
	return (0);
}
