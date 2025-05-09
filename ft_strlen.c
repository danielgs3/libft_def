/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: danielg3 <danielg3@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/08 13:03:59 by danielg3          #+#    #+#             */
/*   Updated: 2025/04/15 17:31:48 by danielg3         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include <stdio.h>

/*
int ft_strlen(char *str)
{
	int j; // declaration of the variable "j"
	j = 0; // in order to initialize the function
	while (str[j] != '\0') // while the character is not "\0" (the last one) keep printing characters
	{
		j++; // keep writing characters. it will stop when the while is no longer fulfilled
	}
		return j; //important so that the loops ends
}

*/

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

int main()
{
	printf("El número de carácteres es %zu\n", ft_strlen("66"));
	return (0);
}
