/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaqrodri <jaqrodri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/22 16:02:49 by jaqrodri          #+#    #+#             */
/*   Updated: 2020/01/29 17:47:27 by jaqrodri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *dst, const void *src, int c, size_t len)
{
	size_t			i;
	unsigned char	*nsrc;
	unsigned char	*ndst;

	i = 0;
	nsrc = (unsigned char *)src;
	ndst = (unsigned char *)dst;
	while (nsrc[i] != '\0' && i < len && nsrc[i] != c)
	{
		ndst[i] = nsrc[i];
		i++;
	}
	ndst[i] = '\0';
	return (0);
}
