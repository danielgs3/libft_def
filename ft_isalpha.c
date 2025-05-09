/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: danielg3 <danielg3@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/08 13:03:59 by danielg3          #+#    #+#             */
/*   Updated: 2025/04/25 13:31:42 by danielg3         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// (?) le falta que haga el return solo de 1024?

// #include "libft.h"
#include <stdio.h> // biblioteca necesaria para el printf del main

// ft_isalpha comprueba si un carácter es un alfabeto a-z y A-Z) o no.
// si un carácter pasado a isalpha() es un alfabeto,
// devuelve un entero distinto de cero, en caso contrario devuelve 0.

int	ft_isalpha(int c) //  prototipo de la función, se encuentra en el man
{
	// mientras que el char sea alfabetico (a-z y A-Z)
	if ((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z'))
		return (1); //devuelve 1/numero distinto de 0.
	return (0); //si no es alfabetico devuelve 0
}

int	main(void)
{
	int	c;
	c = 'l';

	printf("%d\n", ft_isalpha(c)); // %c cuando es ..., %s cuando es string, %d cuando es numero
	return (0);
}

/* #include "libft.h"

#include <unistd.h> // temporal

int ft_isalpha(int c)
{
	if (c >= 'A' && c <= 'Z' || c >= 'a' && c <= 'z')
	{
		return (1024);
	}

	else
	{
		return (0);
	}
}

int main(int c)
{
   printf("%d\n", ft_isalpha("H")); // %s cuando es string, %d cuando es numero
}

*/
