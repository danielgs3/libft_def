/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: danielg3 <danielg3@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/11 10:27:30 by danielg3          #+#    #+#             */
/*   Updated: 2025/04/25 13:39:21 by danielg3         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

void	*ft_memcpy(void *dest, const void *src, size_t n) // const void es distinto y es para que no se modifique el valor de lo que se está pasando. // size_t es otro tipo de dato, más grand que un long long, etc.
{
	unsigned char	*a; // se hace el cambio porque son void
	unsigned char	*b;

	a = (unsigned char *)dest; // no se pone asterisco al comienzo porque es dereference, aqui hago casting. se incluye el asterisco porque queremos un array (no solo un char)
	b = (unsigned char *)src; // dereference: crear una variable en la que asignas el valor de lo que le has pasado

	// unsigned char: es cuando espero un caracter que sea unicamente positivo

	if (src == NULL && dest == NULL) // si origen o destino son nulos (!) MIRAR ESTO -> PREGUNTA: DEST TAMBIEN TIENE QUE SER NULL?
		return (NULL); // devuelveme unlo

	while (n > 0) // mientras que a y b sea distinto de 0 y n sea mayor que 0
	{
		*a = *b; // se no están los asteriscos  copiaría la dirección de memoria y no el dato (copiaría "0x3953" en vez de "h")
		a++;
		b++;
		n--;
	}
	*a = '\0';
	return(dest);
}


// void *ft_memcpy(void *dst, const void *src, size_t n) //Copie n bytes del área de memoria src al área de memoria dst
// {
//         unsigned int        i;

//         if (src == NULL && dst == NULL) // si origen o destino son nulos
//                 return (NULL); //retorno null.
//         i = 0;
//         while (i < n)// mientra i menor al tamaño de mi buffer
//         {
//                 ((char *)dst)[i] = ((const char *)src)[i];  //igual mi destino de i a la src de i
//                 i++; //aumento i para poder seguir comparando los 2 strings
//         }
//         return (dst); //retorno dest modificado.
// }


int main(void)
{
   char s[] = "holaquetalmanito";
   char f[] = "";

   printf("%s\n", s);
   ft_memcpy(s, f, 4);
   printf("%s\n", s); // %c cuando es ..., %s cuando es string, %d cuando es numero
	return(0);
}
