/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: danielg3 <danielg3@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/13 10:55:07 by danielg3          #+#    #+#             */
/*   Updated: 2025/05/20 16:54:17 by danielg3         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	word_counter(char *s, char c);
static void free_res(char **res);
static char **word_selector(char *s, char c, char	**res);


char **ft_split(char const *s, char c)
{
	char	**res;

	res = malloc((word_counter((char *)s, c) + 1) * sizeof(char *));
	if (res == NULL)
		return(NULL);
	res = word_selector((char *)s, c, res);

	if(res == NULL)
		return (NULL);

	return (res);
}

static char **word_selector(char *s, char c, char	**res)
{
	unsigned int i;
	unsigned int j;
	unsigned int k;

	i = 0;
	k = 0;
	while (s[i] != 0)
	{
		while (s[i] == c && s[i])
			i++;
		j = 0;
		while (s[i + j] != c && s[i + j])
			j++;
		res[k] = ft_substr(s, i, j);
		if(res[k] == NULL)
		{
			free_res(res);
			return (NULL);
		}
		k++;
		i = i + j;
	}
	if (res[k] != NULL)
		res[k] = NULL;
	return (res);
}

static void free_res(char **res)
{
	unsigned int	i;
	i = 			0;

	while(res[i] != NULL)
	{
		free(res[i]);
		i++;
	}
}


static int	word_counter(char *s, char c)
{
	unsigned int i;
	unsigned int j;
	unsigned int k;

	i = 0;
	k = 0;
	while (s[i] != 0)
	{
		while (s[i] == c && s[i])
			i++;
		j = 0;
		while (s[i + j] != c && s[i + j])
		{
			j++;
		}
		if(s[i + j])
			k++;
		i = i + j;
	}

	return(k);
}

/* #include <stdio.h>

int main()
{
	char *s = "  hola  que  tal   .   ";
	char **res;
	res = ft_split(s , ' ');
	int i = 0;
	while (res[i] != NULL)
	{
		printf("%s\n", res[i++]);
	}

	return (0);
} */
