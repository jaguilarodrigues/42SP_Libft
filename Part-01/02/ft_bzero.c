/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaqrodri <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/21 16:44:38 by jaqrodri          #+#    #+#             */
/*   Updated: 2020/01/21 16:44:40 by jaqrodri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

typedef unsigned long size_t;

void ft_bzero(void *s, size_t n)
{
	size_t i;
	unsigned char *s2;

	s2 = (unsigned char *)s;
	i = 0;
	while (*s2 != '\0' && i < n)
	{
		*s2 = 0;
		i++;
		s2++;
	}
}