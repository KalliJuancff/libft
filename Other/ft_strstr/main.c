/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jfidalgo <jfidalgo@student.42barcel.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/15 17:01:40 by jfidalgo          #+#    #+#             */
/*   Updated: 2024/01/24 20:45:06 by jfidalgo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_strstr.h"
#include <stdio.h>
#include <string.h>

void	write_empty_line(void)
{
	printf("\n");
}

void	test_strstr(const char *haystack, const char *needle)
{
	printf("strstr '%s' vs. '%s': [FT] %s, [C] %s\n", haystack, needle, ft_strstr(haystack, needle), strstr(haystack, needle));
}

void	test_ft_strstr(void)
{
	test_strstr("", "");
	test_strstr("", "abc");
	test_strstr("abc", "");
	
	test_strstr("abc", "defg");
	test_strstr("abc", "abc");
	
	test_strstr("abc", "xabc");
	test_strstr("abc", "xabcde");
	test_strstr("abc", "abcde");
	
	test_strstr("abc", "abx");
	test_strstr("abc", "abxabc");
	test_strstr("abc", "abxabcde");
	
	test_strstr("abcde", "xyz");
	test_strstr("abcde", "xabc");
	test_strstr("abcde", "xabcy");
	test_strstr("abcde", "xabcdey");

	test_strstr("abxabc", "abc");
	test_strstr("ababc", "abc");
	test_strstr("ab", "abc");
	test_strstr("abc", "ab");
	write_empty_line();
}


int	main(void)
{
	test_ft_strstr();
	return (0);
}
