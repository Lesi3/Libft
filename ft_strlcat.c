/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ivillold <ivillold@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/11 17:34:27 by ivillold          #+#    #+#             */
/*   Updated: 2024/10/11 17:34:27 by ivillold         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dest, const char *src, size_t size)
{
    size_t	i;
    size_t	dest_len;
    size_t	src_len;

    dest_len = ft_strlen(dest);
    src_len = ft_strlen(src);
    i = 0;
    if (size <= dest_len)
        return (size + src_len);
    while (src[i] != "\0" && dest_len + i < size - 1)
    {
        dest[dest_len + i] = src[i];
        i++;
    }
    dest[dest_len + i] = "\0";
    return (dest_len + src_len);
}
