/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: danielg3 <danielg3@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/11 10:30:18 by danielg3          #+#    #+#             */
/*   Updated: 2025/05/22 11:55:36 by danielg3         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void *ft_memmove(void *dest, const void *src, size_t len)
{
	unsigned char	*a_src;
	unsigned char	*b_dest;
	size_t 			i;

	if (!src && !dest)
		return (NULL);

	a_src = (unsigned char *)src;
	b_dest = (unsigned char *)dest;
	i = 0;

	if (b_dest > a_src)
		while(len-- > 0)
			b_dest[len] = a_src[len];

	else
		while(i++ < len)
			b_dest[i] = a_src[i];

	return(dest);

}
