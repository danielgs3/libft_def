/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: danielg3 <danielg3@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/10 16:07:57 by danielg3          #+#    #+#             */
/*   Updated: 2025/05/08 18:22:22 by danielg3         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

void  ft_bzero(void *s, size_t n) // escribe n bytes puestos a cero en la cadena s
{
        ft_memset(s, 0, n);   //borra los datos en los n bytes de la memoria

//comenzando en la ubicación señalada por s, escribiendo ceros (0) en esa área
}

int     main (void)
{
        char *s = "hola que tal";
        
        ft_bzero(s, 3);
        printf("%s", s);
}
