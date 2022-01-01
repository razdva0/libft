/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtitan <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/16 11:44:56 by mtitan            #+#    #+#             */
/*   Updated: 2021/10/16 11:44:57 by mtitan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t n)
{
	int		i;
	char	*d;
	char	*s;

	d = (char *)dst;
	s = (char *)src;
	if (s == d || n == 0)
		return (dst);
	if (d > s && (size_t)d - (size_t)s < n)
	{
		i = n;
		while (--i >= 0)
			d[i] = s[i];
		return (dst);
	}
	if (s > d && (size_t)s - (size_t)d < n)
	{
		i = -1;
		while (++i < (int)n)
			d[i] = s[i];
		return (dst);
	}
	ft_memcpy(d, s, n);
	return (dst);
}
