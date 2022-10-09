/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mboiko <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/27 16:09:13 by mboiko            #+#    #+#             */
/*   Updated: 2022/09/27 16:09:48 by mboiko           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	size_t	i;

	i = 0;
	if ((!dst && !src) || (dst > src))
		return (ft_memcpy(dst, src, len));
	else
		while (len--)
			*(char *)(dst + i++) = *(char *)src++;
	return (dst);
}
