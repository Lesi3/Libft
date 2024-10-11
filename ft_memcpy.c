/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ivillold <ivillold@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/10 20:00:29 by ivillold          #+#    #+#             */
/*   Updated: 2024/10/10 20:00:29 by ivillold         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void    *ft_memcpy(void *dest, const void *src, size_t n)
{
    size_t  i;
    unsigned char   *d;
    unsigned char   *s;

    d = dest;
    s = src;
    i = 0;
    while (i < n && src[i] != "\0")
    {
        d[0] = s[0];
        i++;
    }
}
