/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: danielg3 <danielg3@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/29 12:09:26 by danielg3          #+#    #+#             */
/*   Updated: 2025/04/29 17:20:09 by danielg3         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h> // Necesario para usar size_t

void *ft_memchr(const void *s, int c, size_t n)
{
/*
Buscar un byte exacto (por ejemplo, 'a' o 42) dentro
de un bloque de memoria (como un array) y devolver un
puntero donde se encuentra.


*/
	unsigned char	*str; // Creamos un puntero a bytes (unsigned char) para recorrer los datos
	unsigned char	cc;  // Almacenamos el valor que queremos buscar, convertido a byte
	size_t	i; // Índice para recorrer los bytes


	str = (unsigned char *) s; // Convertimos el puntero original (void *) a uno que podamos usar
	cc = (unsigned char *) c; // Convertimos el carácter a byte (por si es negativo o muy grande)
	i = 0; // Empezamos desde el primer byte

	while (n > i)  // Repetimos hasta haber revisado n bytes
	{
		if (str[i] == cc) // Si encontramos el byte que buscamos...
			return ((void *) &str[i]); // ... devolvemos un puntero a ese lugar en la memoria
		i++; // Si no lo encontramos, pasamos al siguiente byte
	}

	return (NULL); // Si terminamos el bucle sin encontrarlo, devolvemos NULL
}
