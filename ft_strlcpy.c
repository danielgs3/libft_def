/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: danielg3 <danielg3@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/08 13:03:59 by danielg3          #+#    #+#             */
/*   Updated: 2025/04/11 10:09:37 by danielg3         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int ft_strlen(char *str) // calcula la longitud de una cadena (sin contar el carácter nulo final \0).
{
	int i;
	i = 0;
	while(str[i] != '\0') // para iterar por la cadena hasta que encuentra el carácter nulo ('\0'), que indica el final de la cadena.
	i++;
   return(i); // retorna el valor de i, que representa la longitud de la cadena.
}
unsigned int    ft_strlcpy(char *dest, char *src, unsigned int size)
{
   unsigned int    i;
   unsigned int    j;

   j = ft_strlen(src); // Calcula la longitud de la cadena fuente src usando ft_strlen.
   i = 0;
   if (size != 0) // Si size es diferente de 0:
   {
       while (src [i] != '\0' && i < size - 1) //
       {
           dest[i] = src[i]; //Usa un bucle while para copiar caracteres de src a dest, asegurándose de no exceder size - 1 caracteres (dejando espacio para el carácter nulo final).
           i++;
       }
       dest[i] = '\0'; // Termina dest con un carácter nulo ('\0').
   }
   return (j); // Retorna la longitud de la cadena fuente (src).
}
/* Esta función copia una cadena (src) a otra (dest),
respetando el tamaño máximo de destino (size) y garantizando
que el resultado sea una cadena con terminación nula ('\0').
Devuelve la longitud de la cadena fuente.


La función toma tres argumentos:
dest: la cadena destino donde se copiará src.
src: la cad ena fuente que se copiará.
size: el tamaño máximo que dest puede contener, incluyendo el carácter nulo al final.

*/
int main()
{
   char src[] = "World!";
   char dest[] = "Hello ";
   printf("%d | %s", ft_strlcpy(dest, src, 10), dest);
}
