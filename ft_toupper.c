/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: danielg3 <danielg3@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/11 03:02:04 by danielg3          #+#    #+#             */
/*   Updated: 2025/05/01 17:35:45 by danielg3         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include "libft.h"
#include <stdio.h>


/* ft_toupper convierte las minusculas en mayusculas. Si el carácter es un número o una
letra en mayuscula no presenta ningún cambio.*/


int ft_toupper(int c) // declara la función
{
	char i; // declaro la variable que se encargara de la transformación del caracter
	i = c - 32; // la "i" resta "-32" para pasar de mayusculas a minusculas
	if (c >= 'a' && c <= 'z')
		return(i);
	return(c);
}

/* int main(void)
{
	int c;
	c = 'o';
   printf("%c\n", ft_toupper(c)); // %c cuando es ..., %s cuando es string, %d cuando es numero
	return(0);
}
 */
