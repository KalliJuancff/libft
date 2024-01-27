/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jfidalgo <jfidalgo@student.42bar(...).com  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/25 13:23:30 by jfidalgo          #+#    #+#             */
/*   Updated: 2024/01/27 17:07:44 by jfidalgo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

static int	is_separator(char c)
{
	if (c == ' ')
		return (1);
	if (c == '\t')
		return (1);
	if (c == '\v')
		return (1);
	if (c == '\r')
		return (1);
	if (c == '\n')
		return (1);
	if (c == '\f')
		return (1);
	return (0);
}

int	ft_atoi(const char *str)
{
	int	result;
	int	sign;
	int	digit;

	result = 0;
	while (is_separator(*str))
		str++;
	sign = 0;
	if (*str == '-')
	{
		sign = 1;
		str++;
	}
	else if (*str == '+')
		str++;
	while (*str >= '0' && *str <= '9')
	{
		digit = *str - '0';
		result = result * 10 + digit;
		str++;
	}
	if (sign)
		return (-result);
	return (result);
}
