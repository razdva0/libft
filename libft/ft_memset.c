/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtitan <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/16 11:45:09 by mtitan            #+#    #+#             */
/*   Updated: 2021/10/16 11:45:10 by mtitan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *s, int c, size_t n)
{
	unsigned char	*s_set;
	unsigned char	c_set;
	size_t			i;

	s_set = (unsigned char *)s;
	c_set = (unsigned char)c;
	i = 0;
	while (i < n)
		s_set[i++] = c_set;
	return (s);
}
