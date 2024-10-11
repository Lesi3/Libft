/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ivillold <ivillold@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/11 18:07:42 by ivillold          #+#    #+#             */
/*   Updated: 2024/10/11 18:07:42 by ivillold         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft"

char	*ft_strchr(const char *src, int c)
{
	if (c == '\0')
		return ((char *)src);
	while (*src)
	{
		if (*src == c)
			return ((char *)src);
		src++;
	}
	return (NULL);
}
