/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ivillold <ivillold@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/21 20:23:10 by ivillold          #+#    #+#             */
/*   Updated: 2024/10/28 22:04:21 by ivillold         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// Convierte una cadena de caracteres en un número entero.
static int	ft_sign(const char *str, int *ptr_i)
{
	int	count;
	int	i;

	i = 0;
	count = 1;
	while ((str[i] >= 9 && str[i] <= 13) || str[i] == 32)
		i++;
	if (str[i] == '+' || str[i] == '-')
	{
		if (str[i] == '-')
			count *= -1;
		i++;
	}
	*ptr_i = i;
	return (count);
}

int	ft_atoi(const char *str)
{
	int	sign;
	int	i;
	int	result;

	sign = ft_sign(str, &i);
	result = 0;
	while (str[i] != '\0' && str[i] >= 48 && str[i] <= 57)
	{
		result *= 10;
		result += str[i] - 48;
		i++;
	}
	result *= sign;
	return (result);
}

/*#include <stdio.h>
int	main(void)
{
	char	str[]="-01605+952,4Holi";
	printf("%d\n",ft_atoi(str));
	return (0);
}*/
