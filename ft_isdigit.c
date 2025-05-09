/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: danielg3 <danielg3@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/08 13:03:59 by danielg3          #+#    #+#             */
/*   Updated: 2025/04/25 13:32:55 by danielg3         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include "libft.h"
#include <stdio.h>

// ft_isdigit indica si un carácter es numérico:
// devuelve un valor distinto de cero si c es un dígito decimal (0-9).


int	ft_isdigit(int c) //  prototipo de la función
{
	if (c >= '0' && c <= '9') // mientras que el char sea numerico  (0-9)
		return (1); //  devuelve 1/numero distinto de 0.
	return (0); // si no es alfabetico devuelve 0
}

int main(void)
{
	int c;
	c = '8';
	
	printf("%d\n", ft_isdigit(c)); // %c cuando es ..., %s cuando es string, %d cuando es numero
}

/*
int main(int c)
{
   printf("%d\n", ft_isalpha("H")); // %s cuando es string, %d cuando es numero
}
*/
