/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaqrodri <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/22 17:44:43 by jaqrodri          #+#    #+#             */
/*   Updated: 2020/01/22 17:44:45 by jaqrodri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

typedef unsigned long size_t;

void * ft_memcpy(void *to, const void *from, size_t numBytes)
{
	size_t i;
	unsigned char *nfrom;
	unsigned char *nto;
	
	i = 0;
	nfrom = (unsigned char *)from;
	nto = (unsigned char *) to;

	while (nfrom[i] != '\0' && i < numBytes)
	{	
		nto[i] = nfrom[i];
		i++;
	}
	nto[i] = '\0';
	
	return (0);
}