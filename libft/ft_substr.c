/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtitan <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/16 11:49:17 by mtitan            #+#    #+#             */
/*   Updated: 2021/10/16 11:49:19 by mtitan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*str;
	size_t	i;
	size_t	j;

	i = 0;
	j = 0;
	if (!s)
		return (NULL);
	if (ft_strlen(s) < len)
		len = ft_strlen(s) - start;
	if (ft_strlen(s) < start)
		len = 0;
	str = (char *)malloc(len + 1);
	if (!str)
		return (NULL);
	while (s[i])
	{
		if (i >= start && i - start < len)
			str[j++] = s[i];
		i++;
	}
	str[j] = '\0';
	return (str);
}
