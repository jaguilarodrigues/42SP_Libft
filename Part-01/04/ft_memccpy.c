/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaqrodri <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/22 16:02:49 by jaqrodri          #+#    #+#             */
/*   Updated: 2020/01/22 16:02:50 by jaqrodri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

typedef unsigned long size_t;

void *ft_memccpy (void *dst, const void *src, int c, size_t len)
{
	size_t i;
	unsigned char *nsrc;
	unsigned char *ndst;
	
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