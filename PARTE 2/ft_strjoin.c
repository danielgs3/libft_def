/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: danielg3 <danielg3@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/22 11:52:25 by danielg3          #+#    #+#             */
/*   Updated: 2025/05/08 15:02:59 by danielg3         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_strjoin(char const *s1, char const *s2)
{
	char *res;
	int i;
	int	j;

	i = 0;
	j = 0;

    res = (char *) malloc((ft_strlen(s1) + ft_strlen(s2) + 1) * sizeof(char));
	if(!res)
		return(NULL);

	while(!s1[i])
	{
		res[j] = s1[i];
		i++;
		j++;
	}

	i= 0;

	while(!s2[i])
	{
		res[j] = s1[i];
		i++;
		j++;
	}

	res[j]= NULL;

	return(res);

}
// tiene que interar a lo largo de la función
// hacer el tema de
// malloc (sizeof_(s) && ()())



