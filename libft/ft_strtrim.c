/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtitan <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/16 11:49:02 by mtitan            #+#    #+#             */
/*   Updated: 2021/10/16 11:49:03 by mtitan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_search(char const *set, char c)
{
	size_t	i;

	i = 0;
	while (set[i])
	{
		if (set[i] == c)
			return (1);
		i++;
	}
	return (0);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*str;
	size_t	i;
	size_t	j;
	size_t	k;

	i = 0;
	if (!s1)
		return (NULL);
	while (s1[i] && ft_search(set, s1[i]))
		i++;
	j = ft_strlen(s1);
	while (j > i && ft_search(set, s1[j - 1]))
		j--;
	k = 0;
	str = (char *)malloc((j - i) + 1);
	if (!str)
		return (NULL);
	while (s1[i] && i < j)
		str[k++] = s1[i++];
	str[k] = '\0';
	return (str);
}
#include <stdio.h>

int main(void)
{
	char *str1 = "  ls   ;";
	char *str2 = " ;";

	printf("%s\n", ft_strtrim(str1, str2));
	return 0;
}