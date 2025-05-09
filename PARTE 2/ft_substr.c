/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: danielg3 <danielg3@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/01 11:35:07 by danielg3          #+#    #+#             */
/*   Updated: 2025/05/08 11:55:34 by danielg3         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char *ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t i;
  char *str;

    /* we first check that the string we received is not null
     * if it's the case we return NULL as we won't be able to take
     * a substring out of something empty
     */

	if(!s)
		return (NULL);

    /* if the start index is greater than the length of the original
     * string we return an allocated empty string that can be freed
     * later on
     */
  if (start > ft_strlen(s))
        return (ft_strdup(""));

  if (len > ft_strlen(s + start))
  {
      len = ft_strlen(s + start);

  }

  /* we then allocate the memory
  */

  str = ft_calloc(len + 1, sizeof(char));
  if (!str)
      return (NULL);
  i = 0;

  while(i < len)
  {
    str[i] = s[start + i];
    i++;
  }

  return(str);

}



/*
s: La string desde la que crear la substring.
start: El índice del caracter en ’s’ desde el que empezar la substring.
len: La longitud máxima de la substring.
*/
