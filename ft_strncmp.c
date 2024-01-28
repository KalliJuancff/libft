/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jfidalgo <jfidalgo@student.42barcel.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/22 11:21:19 by jfidalgo          #+#    #+#             */
/*   Updated: 2024/01/28 11:33:45 by jfidalgo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	while (*s1 != '\0' && *s2 != '\0' && n > 0)
	{
		if ((unsigned char) *s1 > (unsigned char) *s2)
			return (1);
		if ((unsigned char) *s1 < (unsigned char) *s2)
			return (-1);
		s1++;
		s2++;
		n--;
	}
	if (n > 0 && (unsigned char) *s1 > (unsigned char) *s2)
		return (1);
	if (n > 0 && (unsigned char) *s1 < (unsigned char) *s2)
		return (-1);
	return (0);
}
