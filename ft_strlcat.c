/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mboiko <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/27 16:48:50 by mboiko            #+#    #+#             */
/*   Updated: 2022/09/29 16:26:44 by mboiko           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	ds;
	size_t	sr;
	size_t	i;

	ds = ft_strlen(dst);
	sr = ft_strlen(src);
	i = ds;
	if (ds >= dstsize)
		return (dstsize + sr);
	while (ds < dstsize - 1 && *src)
		*(dst + ds++) = *src++;
	*(dst + ds) = '\0';
	return (i + sr);
}
