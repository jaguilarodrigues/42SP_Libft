/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaqrodri <jaqrodri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/20 18:01:16 by jaqrodri          #+#    #+#             */
/*   Updated: 2020/02/06 02:27:24 by jaqrodri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*substring;
	int		i;
	int		j;

	if (!s1 || !s2)
		return (0);
	i = 0;
	j = 0;
	substring = (char *)malloc((ft_strlen(s1) + ft_strlen(s2)) * sizeof(char));
	if (substring == NULL)
		return (NULL);
	while (s1[i] != '\0')
	{
		substring[i] = s1[i];
		i++;
	}
	while (s2[j] != '\0')
	{
		substring[i + j] = s2[j];
		j++;
	}
	substring[i + j] = '\0';
	return (substring);
}
