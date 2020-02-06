/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaqrodri <jaqrodri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/04 00:50:44 by jaqrodri          #+#    #+#             */
/*   Updated: 2020/02/06 02:22:40 by jaqrodri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	int				slen;
	unsigned int	i;
	char			*ms;

	if (!s || !f)
		return (NULL);
	i = 0;
	slen = ft_strlen(s);
	ms = (char *)malloc((slen * sizeof(*s)) + 1);
	if (ms == NULL)
		return (NULL);
	while (s[i] != '\0')
	{
		ms[i] = (*f)(i, s[i]);
		i++;
	}
	ms[i] = '\0';
	return (ms);
}
