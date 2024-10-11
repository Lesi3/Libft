/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ivillold <ivillold@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/10 20:19:14 by ivillold          #+#    #+#             */
/*   Updated: 2024/10/10 20:19:14 by ivillold         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dest, char *src, size_t size)
{
    size_t  c;
    size_t  i;

    c = ft_strlen(dest);
    i = 0;
    if (size != 0)
    {
        while (i < size - 1 && src[i] != "\0")
        {
            dest[i] = src[i];
            i++;
        }
        dest[i] = "\0";
    }
    return (c);
}
