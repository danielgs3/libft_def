/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: danielg3 <danielg3@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/11 06:06:40 by danielg3          #+#    #+#             */
/*   Updated: 2025/04/11 06:15:44 by danielg3         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int ft_strlcat(char *dest, char *src, unsigned int size)
/* intenta replicar la funcionalidad de la función estándar strlcat de
la biblioteca estándar de C. Esta función concatena dos cadenas (src a dest) hasta un tamaño máximo dado (size)
y devuelve la longitud total de la cadena que intentó crear.
*/

{
	unsigned int src_length;   // se calcula similar recorriendo la cadena src.
	unsigned int a;
	unsigned int dest_length;

	src_length = 0;
	a = 0;
	dest_length = 0;

   // calcula la longitud de 'dest'
   while (dest[dest_length] != '\0')
           dest_length++;
   // calcula la longitud de 'src'
   while (src[src_length] != '\0')
       src_length++;
   if (size <= dest_length)
       return (size + src_length);
   while (a < (size - dest_length - 1) && src[a] != '\0' )
   {
       dest[dest_length + a] = src[a];
       a++;
   }
   dest[dest_length + a] = '\0';
   return (dest_length + src_length);
}


#include <stdio.h>


int main(void)
{
   char dest[20] = "Hola";
   char src[] = " mundo";
   unsigned int size = 15;


   unsigned int result = ft_strlcat(dest, src, size);


   printf("%s\n", dest);
   printf("%u\n", result);


   return 0;
}
