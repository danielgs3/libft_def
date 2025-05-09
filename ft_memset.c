/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: danielg3 <danielg3@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/10 11:47:45 by danielg3          #+#    #+#             */
/*   Updated: 2025/05/08 18:24:39 by danielg3         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <unistd.h>
#include <stdio.h>

// void  *ft_memset(void *ptr, int x, size_t n) //string, el valor a sustituir y el tamaño de buffer
// {
//    unsigned char  *s;
//    size_t i;

//    i = 0;
//    s = ptr;
//    while (i < n) //mientras i mentor al buffer.
//    {
//       s[i] = (unsigned char)x; //mi strng en la posicion i igual a x
//       i++; //y paso a la siguiente referencia de  memoria.
//    }
//       return (ptr);  // devuelvo el string modificado
// }

void *ft_memset(void *s, int c, size_t n)
{
   unsigned char *a;

   a = (unsigned char)s; // "conversion forzada de un int (q acepta numeros mas alto) a un caracter"
   while (*a && n > 0) // mientras que el a* (posicion de a) sea distinta de caracter nulo, y n sea mayor que 0
   {
      *a = c; // el valor de la posicion del string de "a" pasa a ser "c", el caracter/memoria? a sustituir
       a++; // sigue sustituyendo caracteres
       n--; // disminuye por cada vuelta la "n", el numero de caracteres que tiene que sustituir
   }
   return(s); // devuelveme el string ya cambiad
}
/*
int main(void)
{
   char s[] = "goodbye";
   printf("%s\n", s);

   printf("%s\n", (char *)ft_memset(s, 'A', 3)); // %c cuando es ..., %s cuando es string, %d cuando es numero
 	return(0);
}
*/
