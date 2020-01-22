/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaqrodri <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/20 17:30:00 by jaqrodri          #+#    #+#             */
/*   Updated: 2020/01/20 17:30:03 by jaqrodri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
typedef unsigned long size_t;
#include <stdlib.h>

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char *substring;
	size_t cont;

	cont = 0;
	substring = (char *) malloc(len * sizeof(char));

	if(substring == NULL)
		return NULL;

	while (s[cont] != '\0' && cont < len)
	{
		substring[cont] = s[start + cont];
		cont++;
	}
	substring[cont] = '\0';

	return substring;
}