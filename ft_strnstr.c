/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ivillold <ivillold@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/18 21:12:25 by ivillold          #+#    #+#             */
/*   Updated: 2024/10/18 21:12:25 by ivillold         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_toFindOut(char *str, char *to_find, size_t i, size_t n)
{
	size_t	j;

	j = 0;
	while (to_find[j] != '\0' && n > i + j)
	{
		if (to_find[j] != str[i + j])
			return (NULL);
		j++;
	}
	return (str + i);
}

char	*ft_strnstr(const char *s1, const char *s2, size_t n)
{
	size_t	i;
	char	*find;

	i = 0;
	if (s1[i] == '\0')
        return (char *)s1;
	if (ft_strlen(s2) > n)
		return (NULL);
	while (i < n && s1[i] != '\0')
	{
		if (s1[i] == s2[0])
		{
			find = ft_toFindOut((char *)s1, (char *)s2, i, n);
			if (find != NULL)
				return (find);
		}
		i++;
	}
	return (NULL);
}
