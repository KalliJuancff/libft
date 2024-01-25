/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jfidalgo <jfidalgo@student.42bar(...).com  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/25 16:03:24 by jfidalgo          #+#    #+#             */
/*   Updated: 2024/01/25 17:11:21 by jfidalgo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*calloc(size_t count, size_t size)
{
	unsigned char	*result;
	size_t			num_bytes;

	num_bytes = count * size;
	result = malloc(num_bytes);
	if (result == NULL)
		return (NULL);
	ft_bzero(result, num_bytes);
	return (result);
}
