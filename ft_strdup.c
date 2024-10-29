/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ivillold <ivillold@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/27 14:49:39 by ivillold          #+#    #+#             */
/*   Updated: 2024/10/28 20:15:31 by ivillold         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *c)
{
	char	*dest;
	int		i;

	dest = malloc(sizeof(char) * (ft_strlen(c) + 1));
	if (dest == NULL)
		return (NULL);
	i = 0;
	while (c[i] != '\0')
	{
		dest[i] = c[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}
