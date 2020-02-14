/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaqrodri <jaqrodri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/04 01:58:44 by jaqrodri          #+#    #+#             */
/*   Updated: 2020/02/13 16:26:07 by jaqrodri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "libft.h"

int		cont_num(int n)
{
	int		i;

	i = 0;
	if (n < 0)
	{
		i++;
		n *= -1;
	}
	while (n > 0)
	{
		n = n / 10;
		i++;
	}
	return (i);
}

char	*ft_itoa(int n)
{
	char	*s;
	int		num;

	num = cont_num(n);
	s = (char *)malloc((num + 1) * sizeof(char));
	if (s == NULL)
		return (NULL);
	if (n == -2147483648)
		return (ft_substr("-2147483648", 0, 11));
	if (n == 0)
		return (ft_substr("0", 0, 1));
	if (n < 0)
	{
		s[0] = '-';
		n = n * (-1);
	}
	s[num--] = '\0';
	while (num > 0 || n > 0)
	{
		s[num] = (n % 10) + '0';
		n = n / 10;
		num--;
	}
	return (s);
}
