/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: danielg3 <danielg3@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/11 10:30:18 by danielg3          #+#    #+#             */
/*   Updated: 2025/04/25 11:10:05 by danielg3         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

// void *memmove(void *dest, const void *src, size_t n)
// {
// 	int	i;
// 	unsigned char *a; // se hace el cambio porque son void
// 	unsigned char *b;
// 	a = (unsigned char *)dest; // no se pone asterisco al comienzo porque es dereference, aqui hago casting. se incluye el asterisco porque queremos un array (no solo un char)
// 	b = (unsigned char *)src; // dereference: crear una variable en la que asignas el valor de lo que le has pasado

// if (src == NULL && dest == NULL) // si origen o destino son nulos (!) MIRAR ESTO -> PREGUNTA: DEST TAMBIEN TIENE QUE SER NULL?
// 		return (NULL); // devuelveme unlo

// 	if (a > b)
// 	{
// 		i = n;
// 	}
// }

void *ft_memmove(void *dest, const void *src, size_t len)
{
	 /* declaring our 2 temporary pointers and our counter */
	unsigned char *a_src;
	unsigned char *b_dest;
	int i;

	/* if both src and dst are NULL, we directly return NULL */
	if (!src && !dest)
		return (NULL);

    /* assigning the converted values of src and dst to our temporary
     * pointers so that we don't touch the original values
     */
		a_src = (unsigned char *)src;
	b_dest = (unsigned char *)dest;
	i = 0;

 /* checking if the address of the destination is greater than the
     * address of the source, if that's the case we'll copy from end to
     * start
     */ 

	if (b_dest > a_src)
		while(len-- > 0)
			b_dest[len] = a_src[len];

	else
		while(i++ < len)
			b_dest[i] = a_src[i];

	return(dest);

}

// void	*ft_memmove(void *dst, const void *src, size_t n)
// {
// 	char *tmp;
// 	char *dest;

// 	tmp = (char *)src;
// 	dest = (char *)dst;
// 	if (tmp < dest)
// 	{
// 		while (n--)
// 			dest[n] = tmp[n];
// 	}
// 	else
// 		ft_memcpy(dest, tmp, n);
// 	return (dst);
// }




// mover las letras de un string a otras con solapamiento


dest = "hello"
src = " world"
