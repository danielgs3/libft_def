/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: danielg3 <danielg3@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/11 03:02:04 by danielg3          #+#    #+#             */
/*   Updated: 2025/05/22 12:06:00 by danielg3         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/* ft_tolower convierte las mayusculas en minusculas. Si el carácter es un número o una
letra en minuscula no presenta ningún cambio.*/

/* int	ft_tolower(int c)
{
	if (c >= 'A' && c <= 'Z')
		c += 32;
	return (c);
} */

int ft_tolower(int c) // declara la función
{
	int i; // declaro la variable que se encargara de la transformación del caracter
	i = c + 32; // la "i" resta "-32" para pasar de mayusculas a minusculas
	if (c >= 'A' && c <= 'Z') // si el parametro se encuentra entre la "a" y la "z"...
		return(i); // devuelve su conversión en minusculass
	return(c); // si no se cumple lo anterior, devuelveme el caracter intacto
}


/* #include <stdio.h>

int main(void)
{
	int c;
	c = 'O';
   printf("%c\n", ft_tolower(c)); // %c cuando es ..., %s cuando es string, %d cuando es numero
	return(0);
} */
