/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtitan <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/16 11:47:24 by mtitan            #+#    #+#             */
/*   Updated: 2021/10/16 11:47:26 by mtitan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*str;
	size_t	i;
	size_t	j;

	i = 0;
	j = 0;
	if (!s1)
		return (NULL);
	str = (char *)malloc(ft_strlen(s1) + ft_strlen(s2) + 1);
	if (!str)
		return (NULL);
	while (s1[i])
	{
		str[i] = s1[i];
		i++;
	}
	while (s2[j])
		str[i++] = s2[j++];
	str[i] = '\0';
	return (str);
}

//char	*ft_strjoin(char const *s1, char const *s2)
//{
//	size_t	i;
//	size_t	j;
//	char	*str;
//
//	if (!s1 || !s2)
//		return (NULL);
//	str = malloc(sizeof(char) * ((ft_strlen(s1) + ft_strlen(s2)) + 1));
//	if (str == NULL)
//		return (NULL);
//	i = -1;
//	j = 0;
//	if (s1)
//		while (s1[++i] != '\0')
//			str[i] = s1[i];
//		while (s2[j] != '\0')
//			str[i++] = s2[j++];
//		str[ft_strlen(s1) + ft_strlen(s2)] = '\0';
//		return (str);
//}