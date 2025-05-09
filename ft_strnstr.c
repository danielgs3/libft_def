/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: danielg3 <danielg3@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/25 15:08:56 by danielg3          #+#    #+#             */
/*   Updated: 2025/04/29 18:20:53 by danielg3         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>


char *ft_strnstr(const char *big, const char *little, size_t len)
{
	 size_t	i;
	 size_t j;

	 i = 0;
	 j = 0;

    // Si little está vacío, devolvemos big directamente
	 if (*little == '\0')
		return ((char*) big);

	 while (big[i] && i < len)
	 {
		j = 0;
		// Mientras los caracteres coincidan y no nos salgamos de len
        while (big[i + j] == little[j] && (i + j) < len)
		{
            j++;
            // Si llegamos al final de needle, lo encontramos
            if (little[j] == '\0')
                return (char *)&big[i];
        }
		i++;
	 }
		return NULL; // No se encontró
 }



//         return ((char *) &s[i]);


// char *ft_strchr(const char *s, int c)
// {

// 	unsigned int	i; // por qué unsigned (?)
// 	char	cc;

//   	/* we convert c to a char as we got it as an int (?)*/
//     cc = (char) c;
// 	i = 0;


//     /* looping over the whole string s */
// 	while(s[i])
// 	{
// 		/* if the current character is equal to cc
//          * this means we found an occurence of c in the string
//          * therefore, we return the address of the char as a char pointer
//          */
// 			if (s[i] == cc)
// 			 return ((char *) &s[i]);
//         /* if the current character is not equal to cc
//          * we advance in the string
//          */
// 		i++;
// 	}

//     /* once we looped over the whole string, if we didn't find an
//      * occurence of cc, we have to check if cc is equal to '\0'
//      * so we check once again if the current character is equal to cc
//      * if this is the case, we return the address of '\0' as a char
//      *pointer
//      */
// 	  if (s[i] == cc)
//         return ((char *) &s[i]);
// 	/* if we reach this point, this means we didn't find any
//       occurence of cc in the string so we return NULL as
//       stated in the man
//      */
// 	return (NULL);

// }

