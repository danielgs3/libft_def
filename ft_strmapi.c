/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: danielg3 <danielg3@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/09 08:31:33 by danielg3          #+#    #+#             */
/*   Updated: 2025/05/27 17:18:01 by danielg3         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char *res;
	unsigned int i;

	res = malloc((ft_strlen(s) + 1) * sizeof(char));

	if(!res || !s)
		return (NULL);

	i = 0;

	while (s[i])
	{
		res[i] = f(i, s[i]);
		i++;
	}

	res [i] = '\0';
	return(res);

}

