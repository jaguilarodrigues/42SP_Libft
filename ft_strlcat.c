/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaqrodri <jaqrodri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/30 01:13:58 by jaqrodri          #+#    #+#             */
/*   Updated: 2020/01/30 15:50:32 by jaqrodri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	j;
	size_t	i;

	j = 0;
	i = 0;
	while (dst[j] != '\0')
		j++;
	while (src[i] && (i + 1 + j) < dstsize)
	{
		dst[i + j] = src[i];
		i++;
	}
	dst[i + j] = '\0';
	while (src[i] != '\0')
		i++;
	if (dstsize < j)
		return (dstsize + i);
	return (j + i);
}
