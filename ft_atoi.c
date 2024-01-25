/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jfidalgo <jfidalgo@student.42bar(...).com  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/25 13:23:30 by jfidalgo          #+#    #+#             */
/*   Updated: 2024/01/25 13:48:16 by jfidalgo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_atoi(const char *str)
{
	int	result;
	int	sign;
	int	digit;

	result = 0;
	while (*str == ' ' || *str == '\t' || *str == '\r' || *str == '\n')
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
