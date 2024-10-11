/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ivillold <ivillold@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/11 18:16:55 by ivillold          #+#    #+#             */
/*   Updated: 2024/10/11 18:16:55 by ivillold         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft"

char	*ft_strrchr(const char *src, int c)
{
	int	src_len;
	int	i;

	if (c == '\0')
		return (src[src_len - i]);
	src_len = ft_strlen(src);
	i = 0;
	while (i < src_len && src[i] != '\0')
	{
		if (src[src_len - i] == c)
			return (src[src_len - i]);
		i++;
	}
	return (NULL);
}
