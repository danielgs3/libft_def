/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: danielg3 <danielg3@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/01 17:27:16 by danielg3          #+#    #+#             */
/*   Updated: 2025/05/01 17:36:22 by danielg3         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int main()
{
	char s[] = "Hola como estas?";

	s[5] = ft_toupper(s[5]);
	printf("%s\n", s);
	return 0;
}
