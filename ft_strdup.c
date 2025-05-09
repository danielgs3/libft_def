/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: danielg3 <danielg3@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/22 09:54:06 by danielg3          #+#    #+#             */
/*   Updated: 2025/04/22 10:14:24 by danielg3         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

size_t ft_strlen(const char *s) // el const char es para evitar que se modifique
{
	size_t	j; // declaration of the variable "j"
	j = 0; // in order to initialize the function
	// if (!s) // mientras que el string sea distinto de caracter nulo. -> (?) es necesario???
	// 	return(0); // ?
	while (s[j]) // también vale "while(s[i] != '\0')"
		j++; // keep writing characters. it will stop when the while is no longer fulfilled
	return(j); //important so that the loops ends
}

char *strdup(const char *s)
{
	char *s2;
	int	i;

	i = 0;
	if (!(s2 = (char*)malloc(sizeof(char) * ft_strlen(s) + 1)))
}
