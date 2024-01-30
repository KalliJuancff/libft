/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jfidalgo <jfidalgo@student.42bar(...).com  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/30 19:58:35 by jfidalgo          #+#    #+#             */
/*   Updated: 2024/01/30 20:12:26 by jfidalgo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

static int	get_buffer_long(int n)
{
	int	result;
	unsigned int	i;

	result = 1;
	if (n < 0)
	{
		n = -n;
		result++;
	}
	i = (unsigned int)n;
	while (i >= 10)
	{
		i /= 10;
		result++;
	}
	return (result);
}

static char	*putnbr_to_buffer_aux(unsigned int n, char *buffer)
{
	char	digit;

	if (n < 10)
	{
		digit = n + '0';
		*buffer = digit;
		buffer++;
		return (buffer);
	}
	else
	{
		buffer = putnbr_to_buffer_aux(n / 10, buffer);
		buffer = putnbr_to_buffer_aux(n % 10, buffer);
		return (buffer);
	}
}

static void	putnbr_to_buffer(int n, char *buffer)
{
	if (n < 0)
	{
		*buffer = '-';
		buffer++;
		buffer = putnbr_to_buffer_aux(-n, buffer);
	}
	else
		buffer = putnbr_to_buffer_aux(n, buffer);
	*buffer = '\0';
}

char	*ft_itoa(int n)
{
	char	*result;

	result = malloc((get_buffer_long(n) + 1) * sizeof(char));
	if (result == NULL)
		return (NULL);
	putnbr_to_buffer(n, result);
	return (result);
}
