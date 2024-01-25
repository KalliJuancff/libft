/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jfidalgo <jfidalgo@student.42bar(...).com  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/25 11:05:19 by jfidalgo          #+#    #+#             */
/*   Updated: 2024/01/25 13:04:47 by jfidalgo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "libft.h"

int	is_separator(char letter)
{
	if (letter == ' ' || letter == '\t')
		return (1);
	return (0);
}

char	*skip_separators(const char *str)
{
	while (is_separator(*str))
		str++;
	return ((char *)str);
}

int	my_pow(int base, int exponent)
{
	if (exponent == 0)
		return (1);
	return (base * (my_pow(base, exponent - 1)));
}

int  my_strlen(const char *s)
{
        int     result;

        result = 0;
        while (*s != '\0' && !is_separator(*s))
	{
		if (!is_separator(*s))
                	result++;
		s++;
	}
        return (result);
}

int	ft_atoi(const char *str)
{
	int	result;
	int	is_negative;
	int	digit;
	int	exp;

	result = 0;
	str = skip_separators(str);
	is_negative = 0;
	if (*str == '-')
	{
		is_negative = 1;
		str++;
	}
	while (*str != '\0' && !(is_separator(*str)))
	{
		digit = *str - '0';
		exp = my_strlen(str) - 1;
		result += digit * my_pow(10, exp);
		str++;
	}
	if (is_negative)
		return (-result);
	return (result);
}
