/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jfidalgo <jfidalgo@student.42bar(...).com  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/29 11:40:55 by jfidalgo          #+#    #+#             */
/*   Updated: 2024/01/29 17:58:30 by jfidalgo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

static int	is_separator(char character, char separator)
{
	return (character == separator);
}

static int	get_number_of_tokens(char const *s, char c)
{
	int	result;

	result = 0;
	while (*s != '\0')
	{
		while (*s != '\0' && is_separator(*s, c))
			s++;
		if (*s != '\0')
			result++;
		while (*s != '\0' && !is_separator(*s, c))
			s++;
	}
	return (result);
}

static int	populate_split(char **array, char const *s, char c)
{
	int		i;
	char	*start;
	int		len;

	i = 0;
	while (*s != '\0')
	{
		start = NULL;
		len = 0;
		while (*s != '\0' && is_separator(*s, c))
			s++;
		if (*s != '\0')
			start = (char *) s;
		while (*s != '\0' && !is_separator(*s, c))
		{
			len++;
			s++;
		}
		if (start != NULL)
		{
			array[i] = malloc((len + 1) * sizeof(char));
			if (array[i] == NULL)
			{
				i--;
				while (i >= 0)
				{
					free(array[i]);
					i--;
				}
				return (0);
			}
			ft_strlcpy(array[i], start, len + 1);
			i++;
		}
	}
	return (1);
}

char	**ft_split(char const *s, char c)
{
	char	**result;
	int		num_tokens;
	int		can_populate_split;

	if (s == NULL)
		return (NULL);
	num_tokens = get_number_of_tokens(s, c);
	result = malloc((num_tokens + 1) * sizeof(char *));
	if (result == NULL)
		return (NULL);
	can_populate_split = populate_split(result, s, c);
	if (!can_populate_split)
	{
		free(result);
		return (NULL);
	}
	result [num_tokens] = NULL;
	return (result);
}


/*
	int	i = 0;
	while (i < num_tokens)
	{
		result[i] = malloc(2 * sizeof(char));
		result[i][0] = i + 49;
		result[i][1] = '\0';
		i++;
	}

	result[0] = malloc(5 * sizeof(char));
	ft_strlcpy(result[0], "gott", 5);
	result[1] = malloc(5 * sizeof(char));
	ft_strlcpy(result[1], "vati", 5);
*/
