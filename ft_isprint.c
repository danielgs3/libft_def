/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: danielg3 <danielg3@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/10 11:05:44 by danielg3          #+#    #+#             */
/*   Updated: 2025/04/25 13:36:59 by danielg3         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>


int	ft_isprint(int c) // prototipo de funcuin
{
// si se encuentra entre los caracter imprimibles...
	if (c >= 32 && c <= 126)
		return (1);// devuelve 1
	return (0); // sino, devuelve 0
}

int	main(void)
{
	int c;
	c = 'h';

   printf("%d\n", ft_isprint(c)); // %c cuando es ..., %s cuando es string, %d cuando es numero
}
