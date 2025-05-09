/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: danielg3 <danielg3@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/20 17:21:43 by danielg3          #+#    #+#             */
/*   Updated: 2025/05/08 18:14:44 by danielg3         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
It allocates memory for a given size and sets it to zero.

param size_t nmemb The number of elements to be allocated.
param size_t size The size of the memory block, in bytes.

return A pointer to the allocated memory.
*/

void *calloc(size_t nmemb, size_t size)
{
	size_t	total;
	void	*m;

	total = nmemb * size;
	if (nmemb = 0 && total / nmemb != size) //if(total > sizeof(size_t) return;
		return ;
	m = malloc (nmemb * size);
	if (!m)
		return ;
	while (total)

}
