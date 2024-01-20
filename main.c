/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jfidalgo <jfidalgo@student.42barcel.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/15 17:01:40 by jfidalgo          #+#    #+#             */
/*   Updated: 2024/01/20 21:18:27 by jfidalgo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <ctype.h>
#include <string.h>

void	write_empty_line(void)
{
	printf("\n");
}

void	test_isalpha(int c)
{
	printf("isalpha '%c'?: [FT] %d; [C] %d\n", c, ft_isalpha(c), isalpha(c));
}

void	test_isdigit(int c)
{
	printf("isdigit '%c'?: [FT] %d; [C] %d\n", c, ft_isdigit(c), isdigit(c));
}

void	test_isalnum(int c)
{
	printf("isalnum '%c'?: [FT] %d; [C] %d\n", c, ft_isalnum(c), isalnum(c));
}

void	test_isascii(int c)
{
	printf("isascii '%d'?: [FT] %d; [C] %d\n", c, ft_isascii(c), isascii(c));
}

void	test_isprint(int c)
{
	printf("isprint '%d'?: [FT] %d; [C] %d\n", c, ft_isprint(c), isprint(c));
}

void	test_strlen(const char *s)
{
	printf("strlen '%s'?: [FT] %u; [C] %u\n", s, ft_strlen(s), strlen(s));
}

void	test_toupper(int c)
{
	printf("toupper '%c'?: [FT] %d; [C] %d\n", c, ft_toupper(c), toupper(c));
}

void	test_ft_isalpha(void)
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

void	test_ft_isdigit(void)
{
	test_isdigit('0');
	test_isdigit('9');
	test_isdigit('A');
	test_isdigit('z');
	write_empty_line();
}

void	test_ft_isalnum(void)
{
	test_isalnum('A');
	test_isalnum('Z');
	test_isalnum('a');
	test_isalnum('z');
	test_isalnum('A' - 1);
	test_isalnum('Z' + 1);
	test_isalnum('a' - 1);
	test_isalnum('z' + 1);
	test_isalnum('0');
	test_isalnum('9');
	test_isalnum('A');
	test_isalnum('z');
	write_empty_line();
}

void	test_ft_isascii(void)
{
	test_isascii(0);
	test_isascii(31);
	test_isascii(32);
	test_isascii(127);
	test_isascii(127 + 1);
	test_isascii(255);
	write_empty_line();
}

void	test_ft_isprint(void)
{
	test_isprint(31);
	test_isprint(32);
	test_isprint(126);
	test_isprint(127);
	write_empty_line();
}

void	test_ft_strlen(void)
{
	test_strlen("");
	test_strlen("DIO");
	test_strlen("GOTT");
	write_empty_line();
}

void	test_ft_toupper(void)
{
	test_toupper('a');
	test_toupper('g');
	test_toupper('z');
	test_toupper('A');
	test_toupper('Z');
	test_toupper(0);
	write_empty_line();
}

int	main(void)
{
	test_ft_isalpha();
	test_ft_isdigit();
	test_ft_isalnum();
	test_ft_isascii();
	test_ft_isprint();
	test_ft_strlen();
	test_ft_toupper();
	return (0);
}
