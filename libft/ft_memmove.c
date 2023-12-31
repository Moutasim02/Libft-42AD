/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mel-ayou <mel-ayou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/08 15:47:49 by mel-ayou          #+#    #+#             */
/*   Updated: 2023/08/16 20:49:46 by mel-ayou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_move(size_t len, size_t i, char *d, const char *s)
{
	while (i < len)
	{
		d[i] = s[i];
		i++;
	}
}

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	size_t		i;
	char		*d;
	const char	*s;

	if (len == 0)
		return (dst);
	if (dst == 0 && src == 0)
		return (NULL);
	d = dst;
	s = src;
	i = 0;
	if (src > dst)
	{
		ft_move(len, i, d, s);
	}
	else
	{
		i = len;
		while (i > 0)
		{
			d[i - 1] = s[i - 1];
			i--;
		}
	}
	return (dst);
}
