/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jfidalgo <jfidalgo@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/26 18:20:21 by jfidalgo          #+#    #+#             */
/*   Updated: 2024/01/26 18:20:53 by jfidalgo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "libft.h"

size_t	get_min_value(size_t value1, size_t value2)
{
	if (value1 < value2)
		return (value1);
	return (value2);
}

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*result;
	size_t	num_bytes;
	size_t	i;

	num_bytes = get_min_value(ft_strlen(s + start), len);
	result = malloc(num_bytes + 1);
	if (!result)
		return (NULL);
	i = 0;
	while (i < num_bytes)
	{
		result[i] = *(s + start + i);
		i++;
	}
	result[i] = '\0';
	return (result);
}
