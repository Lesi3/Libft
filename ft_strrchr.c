/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ivillold <ivillold@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/11 18:16:55 by ivillold          #+#    #+#             */
/*   Updated: 2024/10/28 20:21:13 by ivillold         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *src, int c)
{
	int	i;

	i = 0;
	while (src[i] != '\0')
		i++;
	while (i >= 0)
	{
		if (src[i] == (char)c)
			return ((char *)(src + i));
		i--;
	}
	return (0);
}
