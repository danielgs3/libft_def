/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: danielg3 <danielg3@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/25 16:25:08 by danielg3          #+#    #+#             */
/*   Updated: 2025/04/25 18:36:17 by danielg3         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

// te dan dos voids (que pueden ser dos arrays de numeros, dde char...).
// hay que recorrer los dos voids a la vez
// son dos voids y decidimos pasarlo a char para comparar bytes, porque queremos comparar byte (ambos del mismo tipo de dato)
// string es un array de carcteres
// se ccastea para poder comparar entre la misma cantidad de bytes (BYTE A BYTE) -> casteo // a unsigned int para asegurarse de que la peracion que se hace se hace con numeros positivos

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	unsigned char *a;
	unsigned char *b;
	int								i;

	a = (unsigned char *) s1; // se pone el puntero ya que quiero castear "un puntero", es decir, no quiero que sea solo la primera posición (solo un char) sino todo el string
	b = (unsigned char *) s2;
	i = 0;

	while (n > i)
	{
		if(a[i] != b[i])
			return(a[i] - b[i]);
		i++;
	}
	return (0);

}


int	main(void)
{
	printf("%d\n",ft_memcmp("hola","hola que tal", 8));
}
