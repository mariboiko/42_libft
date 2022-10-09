/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mboiko <mboiko@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/03 16:51:23 by mboiko            #+#    #+#             */
/*   Updated: 2022/10/05 17:51:05 by mboiko           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_len(int n)
{
	int	len;

	len = 0;
	if (n == 0)
		len++;
	if (n < 0)
	{
		n *= -1;
		len++;
	}
	while (n > 0)
	{
		n /= 10;
		len++;
	}
	return (len);
}

char	*ft_charconv(char *dest, int n, int len)
{
	if (n == 0)
		*dest = 48;
	if (n < 0)
	{
		*dest = 45;
		n *= -1;
	}
	while (n > 0)
	{
		*(dest + len--) = 48 + (n % 10);
		n /= 10;
	}
	return (dest);
}

char	*ft_itoa(int n)
{
	char	*dest;
	int		len;

	if (n == -2147483648)
	{
		dest = (char *)malloc(sizeof(char) * 12);
		if (!dest)
			return (NULL);
		ft_strlcpy(dest, "-2147483648", 12);
		return (dest);
	}
	len = ft_len(n);
	dest = (char *)malloc(sizeof(char) * len + 1);
	if (!dest)
		return (NULL);
	*(dest + len--) = '\0';
	dest = ft_charconv(dest, n, len);
	return (dest);
}
