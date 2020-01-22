/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaqrodri <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/20 18:01:16 by jaqrodri          #+#    #+#             */
/*   Updated: 2020/01/20 18:01:36 by jaqrodri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdlib.h>

char *ft_strjoin(char const *s1, char const *s2)
{
	char *substring;
	int i;
	int j;
	int s1_len;
	int s2_len;

	i = 0;
	j = 0;
	s1_len = sizeof(s1);
	s2_len = sizeof(s2);

	substring = (char *) malloc((s1_len + s2_len) * sizeof(char));

	if(substring == NULL)
		return NULL;

	while (s1[i] != '\0')
	{
		substring[i] = s1[i];
		i++;
	}

	while (s2[j] != '\0')
	{
		substring[i+j] = s2[j];
		j++;
	}	

	substring[i+j] = '\0';

	return substring;
}
