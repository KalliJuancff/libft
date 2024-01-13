/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   salida.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jfidalgo <jfidalgo@student.42barcel.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/13 13:06:28 by jfidalgo          #+#    #+#             */
/*   Updated: 2024/01/13 13:08:47 by jfidalgo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include "funciones.h"

void	presentar(int a)
{
	char	digit;

	digit = 48 + a;
	write(1, &digit, 1);
	write(1, "\n", 1);
}
