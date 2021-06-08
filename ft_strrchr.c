/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaqrodri <jaqrodri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/30 12:23:14 by jaqrodri          #+#    #+#             */
/*   Updated: 2021/06/07 22:20:00 by jaqrodri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	char	*p;

	p = NULL;
	if ((char)c == '\0')
		p = ((char *)s + ft_strlen(s));
	while (*s != '\0')
	{
		if (*s == (char)c)
			p = ((char *)s);
		s++;
	}
	return (p);
}
