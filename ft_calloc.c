/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ivillold <ivillold@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/21 20:48:05 by ivillold          #+#    #+#             */
/*   Updated: 2024/10/28 21:26:07 by ivillold         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// Asigna memoria para una cantidad específica de 
//elementos y los inicializa en cero.
void	*ft_calloc(size_t n, size_t size_of)
{
	size_t	total_size;
	void	*ptr;

	total_size = n * size_of;
	if (n != 0 && total_size / n != size_of)
		return (NULL);
	ptr = malloc(total_size);
	if (ptr == NULL)
		return (NULL);
	ft_memset(ptr, 0, total_size);
	return (ptr);
}
