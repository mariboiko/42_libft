/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mboiko <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/28 18:47:28 by mboiko            #+#    #+#             */
/*   Updated: 2022/09/28 18:49:51 by mboiko           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s1)
{
	char	*cpy;
	size_t	j;

	j = ft_strlen(s1);
	cpy = (char *)malloc(sizeof(char) * (j + 1));
	if (cpy == NULL)
		return (NULL);
	ft_strlcpy(cpy, s1, j + 1);
	return (cpy);
}
