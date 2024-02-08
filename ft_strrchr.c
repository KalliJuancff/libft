/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jfidalgo <jfidalgo@student.42barcel.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/21 16:43:59 by jfidalgo          #+#    #+#             */
/*   Updated: 2024/02/08 11:58:16 by jfidalgo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

char	*ft_strrchr(const char *s, int c)
{
	int	len;

	len = (int) ft_strlen(s);
	while (len >= 0)
	{
		if (s[len] == (char) c)
			return ((char *) &(s[len]));
		len--;
	}
	return (NULL);
}
