/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: danielg3 <danielg3@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/11 03:47:16 by danielg3          #+#    #+#             */
/*   Updated: 2025/05/27 12:59:06 by danielg3         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_strchr(const char *s, int c)
{
	unsigned int	i;
	char	cc;

    cc = (char) c;
	i = 0;

	while(s[i])
	{
		if (s[i] == cc)
		 return ((char *) &s[i]);

		i++;
	}

	  if (s[i] == cc)
        return ((char *) &s[i]);

	return (NULL);
}
