/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jfidalgo <jfidalgo@student.42bar(...).com  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/28 17:24:29 by jfidalgo          #+#    #+#             */
/*   Updated: 2024/01/28 17:36:59 by jfidalgo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*result;
	size_t	s1_len;
	size_t	s2_len;

	if (s1 == NULL || s2 == NULL)
		return (NULL);
	s1_len = ft_strlen(s1);
	s2_len = ft_strlen(s2);
	result = malloc((s1_len + s2_len + 1) * sizeof(char));
	if (result == NULL)
		return (NULL);
	ft_strlcpy(result, s1, s1_len + 1);
	ft_strlcat(result, s2, s1_len + s2_len + 1);
	return (result);
}
