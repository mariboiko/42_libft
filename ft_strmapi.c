/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mboiko <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/30 18:09:24 by mboiko            #+#    #+#             */
/*   Updated: 2022/09/30 18:09:33 by mboiko           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char	*s1;
	size_t	i;

	i = 0;
	s1 = (char *)malloc(sizeof(char) * (ft_strlen(s) + 1));
	if (!s1 || !s)
		return (NULL);
	while (s[i])
	{
		s1[i] = f(i, ((char *)s)[i]);
		i++;
	}
	s1[i] = '\0';
	return (s1);
}
