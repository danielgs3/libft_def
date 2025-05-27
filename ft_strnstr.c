/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: danielg3 <danielg3@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/25 15:08:56 by danielg3          #+#    #+#             */
/*   Updated: 2025/05/27 18:12:41 by danielg3         ###   ########.fr       */
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
