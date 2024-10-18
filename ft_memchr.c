/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ivillold <ivillold@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/18 20:52:03 by ivillold          #+#    #+#             */
/*   Updated: 2024/10/18 20:52:03 by ivillold         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t	i;
	const unsigned char	*src;

	i = 0;
	src = s;
	while (i < n)
	{
		if (src[i] == c)
			return ((void *)src[i]);
	}
	return (NULL);
}
