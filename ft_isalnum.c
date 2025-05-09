/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: danielg3 <danielg3@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/10 10:22:50 by danielg3          #+#    #+#             */
/*   Updated: 2025/04/25 13:25:43 by danielg3         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
// #include "libft.h"

// ft_isalnum comprueba si hay un carácter alfanumérico.
// devuelve un valor distinto de 0 (equivalente al booleano true)
// si un carácter es alfanumérico (a-z) o (0-9).

// int ft_isalnum(int c) //  prototipo de la función
// {
// 	return(ft_isalpha(c) || ft_isdigit(c)); // esto se puede?
// }

int	ft_isalnum(int c)
{
	if ((c >= '0' && c <= '9') || (c >= 'A' && c <= 'Z')
		|| (c >= 'a' && c <= 'z'))
		return (1);
	return (0);
}
/*
int main()
{
	int a = 'F';
	printf("%d\n", ft_isalnum(a));
}
*/
