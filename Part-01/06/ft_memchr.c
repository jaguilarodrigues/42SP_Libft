/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaqrodri <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/22 15:42:24 by jaqrodri          #+#    #+#             */
/*   Updated: 2020/01/22 15:42:30 by jaqrodri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

typedef unsigned long size_t;

void *ft_memchr(const void *str, int c, size_t n)
{
	size_t i;
	unsigned char *nstr;
	
	i = 0;
	nstr = (unsigned char *)str;
	while (*nstr != '\0' && i < n)
	{
		if(*nstr == c)
		{
			void *nnstr;
			nnstr= (void *)nstr;
			return nnstr;
		}
		i++;
	}
	return (0);
}