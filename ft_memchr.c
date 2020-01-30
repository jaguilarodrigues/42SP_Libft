/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaqrodri <jaqrodri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/22 15:42:24 by jaqrodri          #+#    #+#             */
/*   Updated: 2020/01/30 12:19:49 by jaqrodri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *str, int c, size_t n)
{
	size_t			i;
	unsigned char	*nstr;
	void			*nnstr;

	i = 0;
	nstr = (unsigned char *)str;
	while (*nstr != '\0' && i < n)
	{
		if (*nstr == (unsigned char)c)
		{
			nnstr = (void *)nstr;
			return (nnstr);
		}
		i++;
		nstr++;
	}
	return (NULL);
}
