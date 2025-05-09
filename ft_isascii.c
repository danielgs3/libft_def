/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: danielg3 <danielg3@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/10 10:59:53 by danielg3          #+#    #+#             */
/*   Updated: 2025/04/25 13:32:39 by danielg3         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// ft_isdigit comprueba sin un carácter pertenece al ASCII.
// devuelve un valor distinto de cero si el argumento está en el rango de 0-127

int	ft_isascii(int c) // prototipo de la funcion
{
	if (c >= 0 && c <= 127) // mientras que el char sea numerico  (0-9)
		return (1); // devuelveme 1
	return(0); // sino, devuelveme 0
}
