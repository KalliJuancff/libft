/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jfidalgo <jfidalgo@student.42bar(...).com  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/24 11:53:38 by jfidalgo          #+#    #+#             */
/*   Updated: 2024/02/01 16:04:02 by jfidalgo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	needle_len;
	int		result_ncompare;

	if (*needle == '\0')
		return ((char *)haystack);
	needle_len = ft_strlen(needle);
	while (*haystack != '\0' && len >= needle_len)
	{
		result_ncompare = ft_strncmp(haystack, needle, needle_len);
		if (*haystack == *needle && result_ncompare == 0)
			return ((char *)haystack);
		haystack++;
		len--;
	}
	return (NULL);
}
