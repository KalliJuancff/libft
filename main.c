/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jfidalgo <jfidalgo@student.42barcel.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/15 17:01:40 by jfidalgo          #+#    #+#             */
/*   Updated: 2024/01/15 20:21:58 by jfidalgo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

void	test_isalpha(int c)
{
	printf("Is alpha '%c'?: %d\n", c, ft_isalpha(c));
}

int	main(void)
{
	test_isalpha('A');
	test_isalpha('Z');
	test_isalpha('a');
	test_isalpha('z');
	test_isalpha('A' - 1);
	test_isalpha('Z' + 1);
	test_isalpha('a' - 1);
	test_isalpha('z' + 1);
	return (0);
}
