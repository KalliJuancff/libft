/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jfidalgo <jfidalgo@student.42barcel.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/22 18:45:13 by jfidalgo          #+#    #+#             */
/*   Updated: 2024/01/22 20:19:16 by jfidalgo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stddef.h>

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	unsigned char	*pdest;
	unsigned char	*psrc;

	if (dest <= src)
	{
		return (ft_memcpy(dest, src, n));
	}
	else
	{
		psrc = (unsigned char *)src + n - 1;
		pdest = (unsigned char *)dest + n - 1;
		while (n > 0)
		{
			*pdest = *psrc;
			pdest--;
			psrc--;
			n--;
		}
	}
	return (dest);
}
