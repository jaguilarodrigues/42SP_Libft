/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaqrodri <jaqrodri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/20 17:30:00 by jaqrodri          #+#    #+#             */
/*   Updated: 2020/02/13 16:31:56 by jaqrodri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*substring;
	size_t	cont;

	cont = 0;
	if (!s)
		return (NULL);
	substring = (char *)malloc((len + 1) * sizeof(char));
	if (substring == NULL)
		return (NULL);
	while (((start + cont) < ft_strlen(s)) && (cont < len))
	{
		substring[cont] = s[start + cont];
		cont++;
	}
	substring[cont] = '\0';
	return (substring);
}
