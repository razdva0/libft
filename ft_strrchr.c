/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtitan <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/16 11:48:51 by mtitan            #+#    #+#             */
/*   Updated: 2021/10/16 11:48:53 by mtitan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int		i;
	char	b;
	char	*d;

	b = (char)c;
	d = (char *)s;
	i = ft_strlen(d);
	while (i >= 0)
	{
		if (d[i] == b)
			return (&d[i]);
		i--;
	}
	return (NULL);
}
