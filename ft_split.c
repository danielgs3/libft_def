/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: danielg3 <danielg3@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/13 10:55:07 by danielg3          #+#    #+#             */
/*   Updated: 2025/05/22 16:59:13 by danielg3         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	word_counter(char *s, char c);
static void free_res(char **res);
static char **word_selector(char *s, char c, char	**res);



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
		if (j > 0)
		{
			res[k] = ft_substr(s, i, j); // podría ser que tenga que chechkear si el s está vacio
			if((!res[k]) && (j > 0))
			{
				free_res(res);
				return (NULL);
			}
		}
		if (j > 0)
			k++;
		i = i + j;
	}
	return (res[k] = NULL, res);
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
char **ft_split(char const *s, char c)
{
	char	**res;

	res = malloc(((word_counter((char *)s, c)) + 1) * sizeof(char *));
	if (res == NULL)
		return(NULL);
	res = word_selector((char *)s, c, res);
	if(res == NULL)
		return (free(res), NULL);

	return (res);
}

#include <stdio.h>

int main()
{
	char *s = "hello!";
	char **res;
	res = ft_split("hello!", 32:' ');
	printf("%s\n", res[0]);
	printf("%s\n", res[1]);
	// printf("%s\n", res[2]);
	// printf("%s\n", res[3]);
	// printf("%s\n", res[4]);
	//printf("%s\n", res[2]);
	//printf("%s\n", (char *)res[3]);
	free(res[0]);
	free(res[1]);
	//free(res[2]);
	//free(res[3]);
	//free(res[4]);
	free(res);
	return (0);
}
