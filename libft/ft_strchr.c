/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtitan <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/16 11:46:34 by mtitan            #+#    #+#             */
/*   Updated: 2021/10/16 11:46:36 by mtitan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	int		i;
	char	b;
	char	*d;

	i = 0;
	b = (char)c;
	d = (char *)s;
	while (d[i] && d[i] != b)
		i++;
	if (d[i] == b)
		return (&d[i]);
	return (NULL);
}

//{
//	int	i;
//
//	i = 0;
//	if (!s)
//		return (0);
//	if (c == '\0')
//		return ((char *)&s[ft_strlen(s)]);
//	while (s[i] != '\0')
//	{
//		if (s[i] == (char) c)
//			return ((char *)&s[i]);
//		i++;
//	}
//	return (0);
//}
