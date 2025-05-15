/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: danielg3 <danielg3@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/25 16:25:08 by danielg3          #+#    #+#             */
/*   Updated: 2025/05/15 18:42:37 by danielg3         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	unsigned char *a;
	unsigned char *b;
	int								i;

	a = (unsigned char *) s1;
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
