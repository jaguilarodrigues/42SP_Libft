/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaqrodri <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/25 10:15:45 by jaqrodri          #+#    #+#             */
/*   Updated: 2020/01/25 10:15:45 by jaqrodri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

typedef unsigned long size_t;
void *ft_memmove(void *dst, const void *src, size_t n)
{
	size_t	i;
	char 	*src2;
	char 	*dst2;
	char	aux[n];

	i = 0;
	src2 = (char *)src;
	dst2 = (char *)dst;
	while(i < (int)n)
	{
		aux[i] = src2[i];
		i++;
	}
	i = 0;
	while(i < (int)n)
	{
		dst2[i] = aux[i];
		i++;
	}
	return (dst);
}