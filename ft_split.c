/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaqrodri <jaqrodri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/06 03:38:36 by jaqrodri          #+#    #+#             */
/*   Updated: 2020/02/06 13:46:13 by jaqrodri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

#include<stdio.h>

int			ft_strchr_len(const char *s, char c)
{
	int	i;

	i = 0;
	if ((char)c == '\0')
		return (i);
	while (*s != '\0')
	{
		if (*s == c)
			return (i);
		i++;
		s++;
	}
	return (i);
}

int			ft_count_words(const char *s, char c)
{
	char	*f;
	int		i;

	f = (char	*)s;
	i = 0;
	while(*f)
	{
		if (*f != c)
		{
			f = f + ft_strchr_len(f, c);
			i++;
		}else
		{
			f++;
		}
	}
	return (i);
}

char		**ft_split(char const *s, char c)
{
	char **new_word;
	
	new_word = (char *)malloc(ft_count_words(s,c) * sizeof(char));

	
}

int main()
{
	printf("%d", ft_count_words("BBBABDSARRB",'A'));
}