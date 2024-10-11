/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ivillold <ivillold@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/10 19:59:16 by ivillold          #+#    #+#             */
/*   Updated: 2024/10/10 19:59:16 by ivillold         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_memset(void *dest, int c, size_t count)
{
    int	i;
	unsigned char	*ptr;

	i = 0;
	ptr = (unsigned char *) dest;
	while (i < count)
	{
		ptr[i] = c;
		i++;
	}
	return (ptr);
}

int	main(void)
{
	char org[10];
	ft_memset(org, 'A', sizeof(org));
	return (0);
}
