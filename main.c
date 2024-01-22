/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jfidalgo <jfidalgo@student.42barcel.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/15 17:01:40 by jfidalgo          #+#    #+#             */
/*   Updated: 2024/01/22 18:10:21 by jfidalgo         ###   ########.fr       */
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

void	test_tolower(int c)
{
	printf("tolower '%c'?: [FT] %d; [C] %d\n", c, ft_tolower(c), tolower(c));
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

void	test_ft_tolower(void)
{
	test_tolower('A');
	test_tolower('G');
	test_tolower('Z');
	test_tolower('a');
	test_tolower('z');
	test_tolower(0);
	write_empty_line();
}


void	test_strchr(const char *s, int c)
{

	printf("strchr '%s', '%c'?: [FT] %s; [C] %s\n", s, c, ft_strchr(s, c), strchr(s, c));
}

void	test_ft_strchr(void)
{
	test_strchr("XYZXYZXY", 90);
	test_strchr("DEFG", 65);
	test_strchr("", 65);
	write_empty_line();
}


void	test_strrchr(const char *s, int c)
{
	printf("strrchr '%s', '%c'?: [FT] %s; [C] %s\n", s, c, ft_strrchr(s, c), strrchr(s, c));
}

void	test_ft_strrchr(void)
{
	test_strrchr("XYZXYZXY", 90);
	test_strrchr("DEFG", 65);
	test_strrchr("", 65);
	write_empty_line();
}


void	test_memset(int c, size_t n)
{
	char buffer[n + 1];
	buffer[n] = '\0';
	ft_memset(buffer, c, n);
	printf("memset de '%d' veces del valor '%d': [FT] '%s'\n", n, c, buffer);
	char buffer2[n + 1];
	buffer2[n] = '\0';
	memset(buffer2, c, n);
	printf("memset de '%d' veces del valor '%d': [C] '%s'\n", n, c, buffer2);
}

void	test_ft_memset(void)
{
	test_memset('G', 7);
	write_empty_line();
}


void	test_bzero(size_t n)
{
	char buffer[n + 1];
	memset(buffer, 'G', n + 1);
	unsigned int i = 0;
	printf("data (%d + 1):\n", n);
	while (i <= n)
	{
		printf("Byte #%d: %d\n", i + 1, buffer[i]);
		i++;
	}
	printf("\n");
	printf("bzero [FT]:\n");
	ft_bzero(buffer, n);
	i = 0;
	while (i <= n)
	{
		printf("Byte #%d: %d\n", i + 1, buffer[i]);
		i++;
	}
	printf("\n");
}

void	test_ft_bzero(void)
{
	test_bzero(7);
	write_empty_line();
}


void	test_strncmp(const char *s1, const char *s2, size_t n)
{
	printf("strncmp '%s', '%s', '%d'?: [FT] %d; [C] %d\n", s1, s2, n, ft_strncmp(s1, s2, n), strncmp(s1, s2, n));
}

void	test_ft_strncmp(void)
{
	test_strncmp("HOLA", "HOLA", 4);
	test_strncmp("HOLA", "HOLA", 7);
	test_strncmp("HOLA", "HOLAS", 4);
	test_strncmp("HOLA", "HOLAS", 5);
	test_strncmp("HOLAS", "HOLA", 4);
	test_strncmp("HOLAS", "HOLA", 5);
	test_strncmp("HOLA", "HOLA", 3);
	write_empty_line();
}


void	test_memchr(const void *s, int c, size_t n)
{
	printf("memchr de %d chars del valor '%d': [FT] '%p'\n", n, c, ft_memchr(s, c, n));
	printf("memchr de %d chars del valor '%d': [C] '%p'\n", n, c, memchr(s, c, n));
}

void	test_ft_memchr(void)
{
	test_memchr("HOLA", 'L', 4);
	test_memchr("HOLA", 'G', 4);
	write_empty_line();
}


void	test_memcmp(const void *s1, const void *s2, size_t n)
{
	char *p1 = (char *)s1;
	char *p2 = (char *)s2;
	printf("memcmp de %d cars. de '%s' contra '%s': [FT] '%d'\n", n, p1, p2, ft_memcmp(s1, s2, n));
	printf("memcmp de %d cars. de '%s' contra '%s': [C] '%d'\n", n, p1, p2, memcmp(s1, s2, n));
}

void	test_ft_memcmp(void)
{
	test_memcmp("HOLA", "hola", 4);
	test_memcmp("hola", "HOLA", 4);
	write_empty_line();
}


void	test_memcpy(const void *src, size_t n)
{
	char buffer[n + 1];
	memset(buffer, 'G', n + 1);
	unsigned int i = 0;
	printf("data (%d + 1):\n", n);
	while (i <= n)
	{
		printf("Byte #%d: %c\n", i + 1, buffer[i]);
		i++;
	}
	printf("\n");
	printf("memcpy [FT]:\n");
	memcpy(buffer, src, n);
	i = 0;
	while (i <= n)
	{
		printf("Byte #%d: %c\n", i + 1, buffer[i]);
		i++;
	}
	printf("\n");
}

void	test_ft_memcpy(void)
{
	test_memcpy("HOLA", 4);
	test_memcpy("hola", 4);
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
	test_ft_tolower();
	test_ft_strchr();
	test_ft_strrchr();
	test_ft_memset();
	test_ft_bzero();
	test_ft_strncmp();
	test_ft_memchr();
	test_ft_memcmp();
	test_ft_memcpy();
	return (0);
}
