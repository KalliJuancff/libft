/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jfidalgo <jfidalgo@student.42bar(...).com  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/24 11:53:38 by jfidalgo          #+#    #+#             */
/*   Updated: 2024/01/24 20:53:05 by jfidalgo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*ft_strstr(const char *haystack, const char *needle)
{
	const char	*temp_haystack;
	const char	*temp_needle;

	if (*needle == '\0')
		return ((char *)haystack);
	temp_haystack = haystack;
	temp_needle = needle;
	while (*haystack != '\0' && *needle != '\0')
	{
		if (*haystack == *needle)
		{
			haystack++;
			needle++;
			if (*needle == '\0')
				return ((char *)temp_haystack);
		}
		else
		{
			if (needle != temp_needle)
				needle = temp_needle;
			else
				haystack++;
			temp_haystack = haystack;
		}
	}
	return (NULL);
}
