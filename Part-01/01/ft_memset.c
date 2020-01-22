/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaqrodri <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/20 19:05:43 by jaqrodri          #+#    #+#             */
/*   Updated: 2020/01/20 19:05:45 by jaqrodri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
typedef unsigned long size_t;

void *ft_memset(void *ptr, int x, size_t n)
{
	size_t i;
	unsigned char *ptr2;

	ptr2 = (unsigned char *)ptr;
	i = 0;
	while (*ptr2 != '\0' && i < n)
	{
		*ptr2 = (unsigned char)x;
		i++;
		ptr2++;
	}
	return ptr;
}
