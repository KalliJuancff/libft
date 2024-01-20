/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jfidalgo <jfidalgo@student.42barcel.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/15 17:01:40 by jfidalgo          #+#    #+#             */
/*   Updated: 2024/01/20 10:11:32 by jfidalgo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <ctype.h>

void	write_empty_line()
{
	printf("\n");
}

void	test_isalpha(int c)
{
	printf("Is alpha '%c'?: [FT] %d; [C] %d\n", c, ft_isalpha(c), isalpha(c));
}

void	test_isdigit(int c)
{
	printf("Is digit '%c'?: [FT] %d; [C] %d\n", c, ft_isdigit(c), isdigit(c));
}

void	test_ft_isalpha()
{
	test_isalpha('A');
	test_isalpha('Z');
	test_isalpha('a');
	test_isalpha('z');
	test_isalpha('A' - 1);
	test_isalpha('Z' + 1);
	test_isalpha('a' - 1);
	test_isalpha('z' + 1);
	write_empty_line();
}

void	test_ft_isdigit()
{
	test_isdigit('0');
	test_isdigit('9');
	test_isdigit('A');
	test_isdigit('z');
	write_empty_line();
}

int	main(void)
{
	test_ft_isalpha();
	test_ft_isdigit();
	return (0);
}
