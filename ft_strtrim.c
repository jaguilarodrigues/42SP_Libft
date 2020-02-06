/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaqrodri <jaqrodri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/04 12:20:53 by jaqrodri          #+#    #+#             */
/*   Updated: 2020/02/06 02:23:12 by jaqrodri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_isinset(char c, char const *set)
{
	int	i;

	i = 0;
	while (set[i] != '\0')
	{
		if (c == set[i])
			return (1);
		i++;
	}
	return (0);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	int		s1_len;
	int		i;
	int		j;
	char	*p;

	i = 0;
	j = 0;
	if (!s1 || !set)
		return (NULL);
	s1_len = ft_strlen(s1);
	p = (char *)malloc((s1_len + 1) * sizeof(char));
	if (p == NULL)
		return (NULL);
	while (s1[i] != '\0' && ft_isinset(s1[i], set))
		i++;
	while (s1_len > 0 && ft_isinset(s1[s1_len - 1], set))
		s1_len--;
	while (j + i < s1_len)
	{
		p[j] = s1[i + j];
		j++;
	}
	p[j] = '\0';
	return (p);
}
