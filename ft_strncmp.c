/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: danielg3 <danielg3@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/08 13:03:59 by danielg3          #+#    #+#             */
/*   Updated: 2025/04/15 17:50:44 by danielg3         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int ft_strncmp(const char *s1, const char *s2, size_t n) // como argmumentos el 1º  string, el 2 str y luego la longitud)
{
	unsigned int    i; // para iterar a lo largo de las cadenas, representa pos (?) por qué unsigned?

	i = 0; // inicializa en la pos 0
	while ((s1[i] != '\0' || s2[i] != '\0') && i < n) // mientras que la posición del string1 y s2 sea distinto de caracter nulo y la posición sea menor que la longitud del argumento
	{
		if (s1[i] > s2[i] || s1[i] < s2[i]) // si la posición del s1 es mayor q s2 o la pos de s2 es mayor q s1
		return (s1[i] - s2[i]); // devuelve la resta de la posición de s1 - s2
		i++; // continua aumentando
	}
	return (0);
}

#include <stdio.h>


int main()
{
   printf("%d", ft_strncmp("Hello", "HelloWorld", 8));
   printf("%d", ft_strncmp("Hel", "HelloWor", 10));
   printf("%d", ft_strncmp("H", "HelloWorld", 6));
}



