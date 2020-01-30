/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaqrodri <jaqrodri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/22 17:44:43 by jaqrodri          #+#    #+#             */
/*   Updated: 2020/01/30 17:21:38 by jaqrodri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	size_t	i;
	char	*nsrc;
	char	*ndst;

	i = 0;
	nsrc = (char *)src;
	ndst = (char *)dst;
	while (i < n)
	{
		ndst[i] = nsrc[i];
		i++;
	}
	return (dst);
}
