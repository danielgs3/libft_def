/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: danielg3 <danielg3@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/25 12:21:19 by danielg3          #+#    #+#             */
/*   Updated: 2025/05/22 11:57:34 by danielg3         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_strrchr(const char *s, int c)
{

	unsigned int	i;  // para moverme por el string
	char *res; // para guardar dónde vi la letra por última vez
	char	cc; // para convertir c a char

  /* we convert c to a char as we got it as an int -> necesario ya que queremos buscar un caracter no un entero*/
  cc = (char) c;

  /* we set res as NULL at the beginning so if we don't find
  * any occurence of c, the function will return NULL
  */
	res = NULL; // al principio no he encontrado nada
	i = 0; // empezamos en el principio

    /* Recorrer el texto entero */
	while(s[i] != '\0') // 	también vale "while(s[i])"
	{
         /* if the current character is equal to cc
         * this means we found an occurence of cc in the string
         * therefore, we set res as the address of the character
         */
			if (s[i] == cc)
			{
        res = (char *)&s[i];  // guardo la dirección cada vez que lo veo
      }
        /* we then advance in the string to search for another
         * occurence of cc
         */
		    i++;
	}

    /* once we looped over the whole string, if we didn't find an
     * occurence of cc, we have to check if cc is equal to '\0'
     * so we check once again if the current character is equal to cc
     * if this is the case, we set res as the address of the '\0' char
     */

	  if (s[i] == cc)
      res = (char *)&s[i];
    /* when we reach the end of the function, we return res
     * since we looped over the whole string and set res as the address
     * of the last occurence of c we found, this will return a pointer
     * to the last occurence of c
     * and if we didn't find any occurence of c, since res was set to
     * NULL at the very beginning of the function, the function will
     * return NULL
     */
	return (res); // devuelvo la última vez que lo vi (o NULL si nunca apareció)

}
