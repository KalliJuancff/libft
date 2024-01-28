/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jfidalgo <jfidalgo@student.42bar(...).com  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/28 11:54:55 by jfidalgo          #+#    #+#             */
/*   Updated: 2024/01/28 13:55:14 by jfidalgo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// Devuelve la longitud del buffer, que no la longitud de la cadena
// (equivale a la función de librería 'strnlen', la cual devuelve la longitud
// pero examinando como máximo %size% carácteres, así, si la cadena es más larga
// que %size% y no contiene un carácter nulo en sus primeros %size% carácteres,
// se devuelve %size%)
static size_t	get_long_buffer(char *str, size_t size)
{
	size_t	result;

	result = 0;
	while (str[result] != '\0' && result < size)
		result++;
	return (result);
}

// Cuando la longitud del buffer es igual al tamaño especificado como parámetro
// el buffer de destino está lleno, así que no podemos agregar más carácteres.
// En ese caso, aunque no hemos hecho ninguna copia "real", tenemos que devolver
// la longitud total si no hubiese restricciones de espacio
size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	dstlong;

	dstlong = get_long_buffer(dst, dstsize);
	if (dstlong == dstsize)
		return (dstlong + ft_strlen(src));
	return (dstlong + ft_strlcpy(dst + dstlong, src, dstsize - dstlong));
}
