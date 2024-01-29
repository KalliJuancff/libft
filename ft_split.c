/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jfidalgo <jfidalgo@student.42bar(...).com  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/29 11:40:55 by jfidalgo          #+#    #+#             */
/*   Updated: 2024/01/29 20:52:46 by jfidalgo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	is_delimiter(char character, char delimiter)
{
	return (character == delimiter);
}

static int	get_number_of_tokens(char const *s, char c)
{
	int	result;

	result = 0;
	while (*s != '\0')
	{
		while (*s != '\0' && is_delimiter(*s, c))
			s++;
		if (*s != '\0')
			result++;
		while (*s != '\0' && !is_delimiter(*s, c))
			s++;
	}
	return (result);
}

char	*get_start_and_length_of_token(char const *s, char c, int *len)
{
	char	*start;

	start = NULL;
	*len = 0;
	while (*s != '\0' && is_delimiter(*s, c))
		s++;
	if (*s != '\0')
		start = (char *) s;
	while (*s != '\0' && !is_delimiter(*s, c))
	{
		(*len)++;
		s++;
	}
	return (start);
}

static char	**populate_split(char **array, char const *s, char c)
{
	int		i;
	char	*start;
	int		len;

	i = 0;
	while (*s != '\0')
	{
		start = get_start_and_length_of_token(s, c, &len);
		if (start == NULL)
			break ;
		array[i] = malloc((len + 1) * sizeof(char));
		if (array[i] == NULL)
		{
			i--;
			while (i >= 0)
				free(array[i]);
			return (NULL);
		}
		ft_strlcpy(array[i], start, len + 1);
		s = start + len;
		i++;
	}
	return (array);
}

char	**ft_split(char const *s, char c)
{
	char	**result;
	int		num_tokens;

	if (s == NULL)
		return (NULL);
	num_tokens = get_number_of_tokens(s, c);
	result = malloc((num_tokens + 1) * sizeof(char *));
	if (result == NULL)
		return (NULL);
	if (populate_split(result, s, c) == NULL)
	{
		free(result);
		return (NULL);
	}
	result [num_tokens] = NULL;
	return (result);
}
